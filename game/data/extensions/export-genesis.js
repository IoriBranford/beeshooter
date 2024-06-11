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
        let triggerActions = {}
        /** @type {Record<string, string>} */
        let pathPointActions = {}
        /** @type {Record<string, string>} */
        let objectDefs = {}
        /**
         * 
         * @param {ObjectGroup} objectgroup 
         */
        let genObjectGroup = (objectgroup) => {
            let objects = {
                /** @type {MapObject[]} */
                Trigger: [],
                /** @type {MapObject[]} */
                Path: [],
                /** @type {MapObject[]} */
                PathPoint: [],
                /** @type {MapObject[]} */
                LevelObject: []
            }
            objectgroup.objects.forEach((object) => {
                switch (object.className) {
                    case 'Trigger':
                    case 'Path':
                    case 'PathPoint':
                        objects[object.className].push(object)
                        break;
                    default: 
                        objects.LevelObject.push(object)
                        break;
                }
            })

            /** @type {string[]} */
            let cName = objectgroup.name.replace(/\W+/g, '_')
            let cCode = [`extern LevelObjectGroup ${cName};`]
            
            if (objects.Trigger.length > 0) {
                let triggersCName = `${cName}_triggers`
                cCode.push(`static Trigger ${triggersCName}[] = {`,
                    objects.Trigger.map((trigger) => {
                        let action = trigger.resolvedProperty('action')
                        if (action)
                            triggerActions[action] = `void ${action}(Trigger *trigger);`
                        else
                            action = `0 /* to be assigned */`
                        return `{.y = ${Math.ceil(trigger.y)}, .action = ${action}, .group = &${cName}}`
                    }).join(',\n'),
                    `};`)
            }
            objects.Path.forEach((path) => {
                let pointsData = {}
                path.polygon.forEach((point, i) => {
                    let pathPoints = objects.PathPoint.filter(
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
                
                let pathPointsCName = `path${path.id}_points`
                cCode.push(`static PathPoint ${pathPointsCName}[] = {`,
                    path.polygon.map((point, i) =>
                        `{.x = ${point.x}, .y = ${point.y}, .numActions = ${pointsData[i].length}, .actions = ${pointsData[i].length > 0 ? `path${path.id}_${i}_actions` : '0'}}`).join(',\n'),
                    '};')
            })
            
            if (objects.Path.length > 0) {
                let pathsCName = `${cName}_paths`
                cCode.push(`static Path ${pathsCName}[] = {`,
                    objects.Path.map(path => `{.x = ${path.x}, .y = ${path.y}, .numPoints = ${path.polygon.length}, .points = path${path.id}_points}`).join(',\n'),
                    '};')
            }

            if (objects.LevelObject.length > 0) {
                let objectsCName = `${cName}_objects`
                cCode.push(`static LevelObject ${objectsCName}[] = {`,
                    objects.LevelObject.map(object => {
                        let definition
                        if (object.className.length > 0) {
                            definition = `&def${object.className}`
                            objectDefs[object.className] = `extern const GameObjectDefinition def${object.className};`
                        } else {
                            definition = '0 /* to be assigned */'
                        }
                        let flags = 0
                        if ((object.resolvedProperty('z') || 0) >= 0)
                            flags += 0x08000
                        if (object.tileFlippedVertically)
                            flags += 0x01000
                        if (object.tileFlippedHorizontally)
                            flags += 0x00800
                        return `{.definition = ${definition}, .x = ${object.x}, .y = ${object.y}, .animInd = ${object.tile?.id || 0}, .flags = ${flags}, .group = &${cName}}`
                    }).join(',\n'),
                    '};'
                )
            }

            cCode.push(
`LevelObjectGroup ${cName} = {
    .numTriggers = ${objects.Trigger.length}, .triggers = ${objects.Trigger.length > 0 ? `${cName}_triggers` : '0'},
    .numPaths = ${objects.Path.length}, .paths = ${objects.Path.length > 0 ? `${cName}_paths` : '0'},
    .numObjects = ${objects.LevelObject.length}, .objects = ${objects.LevelObject.length > 0 ? `${cName}_objects` : '0'}
};`)

            return {cName, cCode}
        }

        /**
         * 
         * @param {Layer[]} layers 
         */
        let genObjectGroups = (layers, objectGroups) => {
            layers.forEach(layer => {
                if (layer.isGroupLayer) {
                    /** @type {GroupLayer} */
                    let group = layer
                    genObjectGroups(group.layers, objectGroups)
                } else if (layer.isObjectLayer) {
                    objectGroups.push(genObjectGroup(layer))
                }
            });
            return objectGroups
        }

        let stage = map.layers.find((layer) => layer.name == 'stage')
        let objectGroups = genObjectGroups(stage.layers, [])

        /**
         * @type {string[]}
         */
        let hCode = []
        hCode.push(
`#ifndef _${baseName.replace(/\W+/g, '_')}_h
#define _${baseName.replace(/\W+/g, '_')}_h

#include "level.h"

extern LevelObjectGroup *OBJECTGROUPS[];
`,
            ...Object.values(objectDefs),
            ...Object.values(triggerActions),
            ...Object.values(pathPointActions))
        hCode.push('#endif')

        /** @type {string[]} */
        let cCode = []
        cCode.push(`#include "${baseName}.h"`,
            ...objectGroups.map(({cCode}) => cCode.join('\n')),
            `LevelObjectGroup *OBJECTGROUPS[] = {`,
            objectGroups.map(({cName}) => `&${cName}`).join(',\n'),
            '};')

        let cFile = new TextFile(fileName, TextFile.WriteOnly)
        cCode.forEach(line => cFile.writeLine(line))
        cFile.commit()
        let hFile = new TextFile(fileName.replace(/\.c$/, '.h'), TextFile.WriteOnly)
        hCode.forEach(line => hFile.writeLine(line))
        hFile.commit()
    }
})