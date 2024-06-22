/// <reference types="@mapeditor/tiled-api" />
/**
* @typedef {Object} LevelObjectGroup
* @property {string} cName
* @property {string[]} cCode
* @property {MapObject[]} Trigger
* @property {MapObject[]} Path
* @property {MapObject[]} PathPoint
* @property {MapObject[]} LevelObject
*/

/**
 * @param {string} name
 */
let toCName = (name) => name.replace(/\W+/g, '_')

let toFix16 = (n) => Math.floor(n * 64)
let toFastFix16 = (n) => Math.floor(n * 256)
let toFastFix32 = (n) => Math.floor(n * 65536)

tiled.registerMapFormat("Honey Guardian C level", {
    name: "Honey Guardian C level",
    extension: "c",

    /**
     * 
     * @param {TileMap} map 
     * @param {string} fileName 
     */
    outputFiles: (map, fileName) => [
        fileName,
        fileName.replace(/\.c$/, '.h')
    ],

    /**
     * 
     * @param {TileMap} map 
     * @param {string} fileName 
     */
    write: (map, fileName) => {
        let baseName = fileName.match(/([^//\\]+).c$/)[1]
        /** @type {Record<string, string>} */
        let pathPointActions = {}
        /** @type {Record<string, string>} */
        let objectDefs = {}

        /**
         * 
         * @param {LevelObjectGroup} levelObjectGroup 
         * @returns cCode
         */
        let genLevelObjectGroupCode = (levelObjectGroup) => {
            let cName = levelObjectGroup.cName
            /** @type {string[]} */
            let cCode = [`extern LevelObjectGroup ${cName};`]
            
            levelObjectGroup.Path.forEach((path) => {
                /**
                 * @type {Record<number, MapObject[]>}
                 */
                let pointsData = {}
                path.polygon.forEach((point, i) => {
                    let pathPoints = levelObjectGroup.PathPoint.filter(
                        (pathPoint) => pathPoint.x == path.x + point.x && pathPoint.y == path.y + point.y)
                    pointsData[i] = pathPoints
                    if (pathPoints.length == 0)
                        return

                    let pathPointActionsCName = `path${path.id}_${i}_actions`

                    cCode.push(`static GObjPathPointFunction ${pathPointActionsCName}[] = {`,
                        pathPoints.map((pathPoint) => {
                            let action = pathPoint.resolvedProperty('action')
                            if (action) {
                                action = action.replace(/\W/, '_')
                                pathPointActions[action] = `void ${action}(GameObject *self, PathPoint *pathPoint);`
                            } else {
                                action = `0 /* to be assigned */`
                            }
                            return `${action}`
                        }).join(',\n'),
                        '};')
                })

                let speed = path.resolvedProperty('speed') || 1
                let pathPointsCName = `path${path.id}_points`
                cCode.push(`static PathPoint ${pathPointsCName}[] = {`,
                    path.polygon.map((point, i, points) => {
                        let pointData = pointsData[i]
                        let prevPoint = i > 0 ? points[i-1] : null
                        let prevPointData = i > 0 ? pointsData[i-1] : null
                        let xDirTo = 0, yDirTo = 0, distTo = 0
                        let shootInterval = 0, shootCount = 0
                        prevPointData?.forEach(pointDatum => {
                            speed = pointDatum.resolvedProperty('speed') || speed
                        })
                        pointData?.forEach(pointDatum => {
                            speed = pointDatum.resolvedProperty('speedto') || speed
                            shootInterval = pointDatum.resolvedProperty('shootinterval') || shootInterval
                            shootCount = pointDatum.resolvedProperty('shoottimes') || shootCount
                        })
                        if (prevPoint) {
                            xDirTo = point.x - prevPoint.x
                            yDirTo = point.y - prevPoint.y
                            distTo = Math.hypot(xDirTo, yDirTo)
                            xDirTo *= speed / distTo
                            yDirTo *= speed / distTo
                        }
return `{
    .x = ${point.x}, .y = ${point.y},
    .speedTo = ${toFix16(speed)}, .distTo = ${toFix16(distTo)},
    .xVelTo = ${toFix16(xDirTo)}, .yVelTo = ${toFix16(yDirTo)},
    .shootCount = ${shootCount}, .shootInterval = ${shootInterval},
    .numActions = ${pointsData[i].length},
    .actions = ${pointsData[i].length > 0 ? `path${path.id}_${i}_actions` : '0'}
}`
                    }).join(',\n'),
                    '};')
            })
            
            if (levelObjectGroup.Path.length > 0) {
                let pathsCName = `${cName}_paths`
                cCode.push(`static Path ${pathsCName}[] = {`,
                    levelObjectGroup.Path.map(path => `{.x = ${path.x}, .y = ${path.y}, .numPoints = ${path.polygon.length}, .points = path${path.id}_points}`).join(',\n'),
                    '};')
            }

            if (levelObjectGroup.LevelObject.length > 0) {
                let objectsCName = `${cName}_objects`
                cCode.push(`static LevelObject ${objectsCName}[] = {`,
                    levelObjectGroup.LevelObject.map(object => {
                        let definition
                        if (object.className.length > 0) {
                            definition = `&def${object.className}`
                            objectDefs[object.className] = `extern const GameObjectDefinition def${object.className};`
                        } else {
                            definition = '0 /* to be assigned */'
                        }
                        let anim = Math.sin(object.rotation)
                        anim = (anim < 0) && -1 || 1
                        let flags = 0
                        if ((object.resolvedProperty('z') || 0) >= 0)
                            flags += 0x08000
                        if (object.tileFlippedVertically || anim < 0)
                            flags += 0x01000
                        if (object.tileFlippedHorizontally)
                            flags += 0x00800
                        anim = Math.abs(anim)
                        return `{.definition = ${definition}, .x = ${object.x}, .y = ${object.y}, .animInd = ${anim}, .flags = ${flags}, .group = &${cName}}`
                    }).join(',\n'),
                    '};'
                )
            }

            cCode.push(
`LevelObjectGroup ${cName} = {
    .numPaths = ${levelObjectGroup.Path.length}, .paths = ${levelObjectGroup.Path.length > 0 ? `${cName}_paths` : '0'},
    .numObjects = ${levelObjectGroup.LevelObject.length}, .objects = ${levelObjectGroup.LevelObject.length > 0 ? `${cName}_objects` : '0'}
};`)

            return cCode
        }

        /**
         * 
         * @param {ObjectGroup} objectgroup 
         */
        let buildLevelObjectGroup = (objectgroup) => {
            /**
             * @type LevelObjectGroup
             */
            let levelObjectGroup = {
                cName: toCName(objectgroup.name),
                Trigger: [],
                Path: [],
                PathPoint: [],
                LevelObject: []
            }
            objectgroup.objects.forEach((object) => {
                switch (object.className) {
                    case 'Trigger':
                    case 'Path':
                    case 'PathPoint':
                        levelObjectGroup[object.className].push(object)
                        break;
                    default: 
                        levelObjectGroup.LevelObject.push(object)
                        break;
                }
            })
            levelObjectGroup.LevelObject.sort((a, b) => b.y - a.y)
            return levelObjectGroup
        }

        /**
         * 
         * @param {Layer[]} layers
         * @param {LevelObjectGroup[]} objectGroups
         */
        let buildLevelObjectGroups = (layers, objectGroups) => {
            layers.forEach(layer => {
                if (layer.isGroupLayer) {
                    /** @type {GroupLayer} */
                    let group = layer
                    buildLevelObjectGroups(group.layers, objectGroups)
                } else if (layer.isObjectLayer) {
                    objectGroups.push(buildLevelObjectGroup(layer))
                }
            });
            return objectGroups
        }

        let stage = map.layers.find((layer) => layer.name == 'stagemd')
        let objectGroups = buildLevelObjectGroups(stage.layers, [])
        /**
         * @type MapObject[]
         */
        let triggers = objectGroups.reduce((triggers, levelObjectGroup) => {
            triggers.push(...levelObjectGroup.Trigger)
            return triggers
        }, [])
        triggers.sort((a, b) => {
            if (b.y == a.y)
                return b.x - a.x
            return b.y - a.y
        })

        /** @type {Record<string, string>} */
        let triggerActions = {}

        /** @type {string[]} */
        let cCode = []
        cCode.push(`#include "${baseName}.h"`,
            ...objectGroups.map((levelObjectGroup) =>
                genLevelObjectGroupCode(levelObjectGroup).join('\n')
            ),
            `Trigger ${baseName}_triggers[] = {`,
            triggers.map((trigger, i) => {
                let action = trigger.resolvedProperty('action')
                if (action)
                    triggerActions[action] = `void ${action}(Trigger *trigger);`
                else
                    action = `0 /* to be assigned */`
                return `/* ${i.toString().padStart(3, ' ')} */ {.x = ${Math.ceil(trigger.x)}, .y = ${Math.ceil(trigger.y)}, .action = ${action}, .group = &${toCName(trigger.layer.name)}}`
            }).join(',\n'),
            '};')

        /**
         * @type {string[]}
         */
        let hCode = []
        hCode.push(
`#ifndef _${baseName.replace(/\W+/g, '_')}_h
#define _${baseName.replace(/\W+/g, '_')}_h

#include "level.h"

#define ${baseName}_numTriggers (${triggers.length})

extern Trigger ${baseName}_triggers[];
`,
            ...Object.values(objectDefs),
            ...Object.values(triggerActions),
            ...Object.values(pathPointActions))
        hCode.push('#endif')

        let cFile = new TextFile(fileName, TextFile.WriteOnly)
        cCode.forEach(line => cFile.writeLine(line))
        cFile.commit()
        let hFile = new TextFile(fileName.replace(/\.c$/, '.h'), TextFile.WriteOnly)
        hCode.forEach(line => hFile.writeLine(line))
        hFile.commit()
    }
})