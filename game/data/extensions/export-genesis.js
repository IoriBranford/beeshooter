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
        let objectActions = {}
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
                    cCode.push(`static const GameObjectAction ${pathPointActionsCName}[] = {`,
                        pathPoints.map((pathPoint) => {
                            let action = pathPoint.resolvedProperty('action')
                            let params = ''
                            if (action) {
                                action = action.replace(/\W/, '_')
                                objectActions[action] = `void ${action}(GameObject *self, const GameObjectAction *action);`
                                
                                let shootInterval = pathPoint.resolvedProperty('shootinterval')
                                let shootCount = pathPoint.resolvedProperty('shoottimes')
                                let anim = pathPoint.resolvedProperty('anim')
                                let update = pathPoint.resolvedProperty('update')
                                let flip = pathPoint.resolvedProperty('flip')
                                let time = pathPoint.resolvedProperty('time')
                                params = (update && `.update = ${update}`)
                                    || (anim && `.anim = ${anim}`)
                                    || (time && `.time = ${time}`)
                                    || (shootCount && shootInterval && `.count = ${shootCount}, .interval = ${shootInterval}`)
                                    || (flip != null && `.flip = ${flip}`)
                                    || ''
                            } else {
                                action = `0 /* to be assigned */`
                            }
                            
                            return `{.action = ${action}, ${params}}`
                        }).join(',\n'),
                        '};')
                })

                let speed = path.resolvedProperty('speed') || 1
                cCode.push(`static const Path path${path.id} = {`,
                    `.x = ${path.x}, .y = ${path.y}, .numPoints = ${path.polygon.length}, .points = {`,
                    path.polygon.map((point, i, points) => {
                        let pointData = pointsData[i]
                        let prevPoint = i > 0 ? points[i-1] : null
                        let prevPointData = i > 0 ? pointsData[i-1] : null
                        let xDirTo = 0, yDirTo = 0, distTo = 0
                        prevPointData?.forEach(pointDatum => {
                            speed = pointDatum.resolvedProperty('speed') || speed
                        })
                        pointData?.forEach(pointDatum => {
                            speed = pointDatum.resolvedProperty('speedto') || speed
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
    .numActions = ${pointsData[i].length},
    .actions = ${pointsData[i].length > 0 ? `path${path.id}_${i}_actions` : '0'}
}`
                    }).join(',\n'),
                    '}',
                    '};')
            })

            let pathsCName = `${cName}_paths`
            if (levelObjectGroup.Path.length > 0) {
                cCode.push(`static const Path *${pathsCName}[] = {`,
                    levelObjectGroup.Path.map(path => `    &path${path.id}`).join(',\n'),
                    '};')
            }

            if (levelObjectGroup.LevelObject.length > 0) {
                cCode.push(...levelObjectGroup.LevelObject.map(object => {
                    let objPathPointIndex = -1
                    let objPath = object.resolvedProperty('path')
                    if (objPath) {
                        objPathPointIndex = objPath.polygon.findIndex(point => objPath.x + point.x == object.x && objPath.y + point.y == object.y)
                    } else {
                        objPath = levelObjectGroup.Path.find((path) => {
                            objPathPointIndex = path.polygon.findIndex(point => path.x + point.x == object.x && path.y + point.y == object.y)
                            return objPathPointIndex > -1
                        })
                    }
                    objPathPointIndex++
                    let definition
                    if (object.className.length > 0) {
                        definition = `&def${object.className}`
                        objectDefs[object.className] = `extern GameObjectDefinition def${object.className};`
                    } else {
                        definition = '0 /* to be assigned */'
                    }
                    let anim = Math.sin(object.rotation)
                    anim = (anim < 0) && Math.floor(anim) || Math.ceil(anim)
                    let flags = 0
                    if ((object.resolvedProperty('z') || 0) >= 0)
                        flags += 0x08000
                    if (anim > 0) {
                        if (object.tileFlippedVertically)
                            flags += 0x00800
                        if (object.tileFlippedHorizontally)
                            flags += 0x01000
                    } else if (anim < 0) {
                        if (!object.tileFlippedVertically)
                            flags += 0x00800
                        if (!object.tileFlippedHorizontally)
                            flags += 0x01000
                    } else {
                        if (object.tileFlippedVertically)
                            flags += 0x01000
                        if (object.tileFlippedHorizontally)
                            flags += 0x00800
                    }
                    anim = Math.abs(anim)

                    let child = object.resolvedProperty('child')
                    child = child && `&lobj${child.id}` || '0'

                    let interval = object.resolvedProperty('spawninterval') || 0

                    let palette = object.resolvedProperty('palette')
return `const LevelObject lobj${object.id} = {
    .definition = ${definition},
    .x = ${object.x}, .y = ${object.y},
    .palette = ${palette && `&${palette}` || 0},
    .animInd = ${anim}, .flags = ${flags},
    .group = &${cName}, .path = ${objPath == null && '0' || `&path${objPath.id}`},
    .pathIndex = ${objPathPointIndex}, .child = ${child}, .interval = ${interval}
};`
                }))

                let objectsCName = `${cName}_objects`
                cCode.push(`static const LevelObject *${objectsCName}[] = {`,
                    levelObjectGroup.LevelObject.map(object => `    &lobj${object.id}`).join(',\n'),
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
            `const Trigger ${baseName}_triggers[] = {`,
            triggers.map((trigger, i) => {
                let action = trigger.resolvedProperty('action')
                if (action)
                    triggerActions[action] = `void ${action}(const Trigger *trigger);`
                else
                    action = `0 /* to be assigned */`
                let count = trigger.resolvedProperty('count') || 0
                return `/* ${i.toString().padStart(3, ' ')} */ { .group = &${toCName(trigger.layer.name)}, .action = ${action}, .count = ${count}, .x = ${Math.ceil(trigger.x)}, .y = ${Math.ceil(trigger.y)} }`
            }).join(',\n'),
            '};',
            `LevelObjectGroup *${baseName}_groups[] = {`,
            objectGroups.map(levelObjectGroup => `    &${levelObjectGroup.cName}`).join(',\n'),
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
extern const Trigger ${baseName}_triggers[];

#define ${baseName}_numGroups (${objectGroups.length})
extern LevelObjectGroup *${baseName}_groups[];
`,
            ...Object.values(objectDefs),
            ...Object.values(triggerActions),
            ...Object.values(objectActions))
        hCode.push('#endif')

        let cFile = new TextFile(fileName, TextFile.WriteOnly)
        cCode.forEach(line => cFile.writeLine(line))
        cFile.commit()
        let hFile = new TextFile(fileName.replace(/\.c$/, '.h'), TextFile.WriteOnly)
        hCode.forEach(line => hFile.writeLine(line))
        hFile.commit()
    }
})