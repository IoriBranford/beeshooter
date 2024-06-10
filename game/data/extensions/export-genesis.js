tiled.registerMapFormat("Honey Guardian Genesis level", {
    name: "Honey Guardian Genesis level",
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
                Character: []
            }
            objectgroup.objects.forEach((object) => {
                switch (object.className) {
                    case 'Trigger':
                    case 'Path':
                    case 'PathPoint':
                        objects[object.className].push(object)
                        break;
                    default: 
                        objects.Character.push(object)
                        break;
                }
            })

            /** @type {string[]} */
            let cCode = [`// ${objectgroup.name}`]
            let cName = objectgroup.name.replace(/\W+/g, '_')
            
            let triggersCName = `${cName}_triggers`
            cCode.push(`Trigger ${triggersCName}[] = {`,
                ...objects.Trigger.map((trigger) => {
                    let action = trigger.resolvedProperty('action')
                    if (action)
                        triggerActions[action] = `void ${action}(Trigger *trigger);`
                    else
                        action = `NULL /* to be assigned */`
                    return `{.y = ${Math.ceil(trigger.y)}, .action = ${action}},`
                }),
                `};`)

            objects.Path.forEach((path) => {
                let pointsData = {}
                path.polygon.forEach((point, i) => {
                    let pathPoints = objects.PathPoint.filter(
                        (pathPoint) => pathPoint.x == path.x + point.x && pathPoint.y == path.y + point.y)
                    pointsData[i] = pathPoints
                    if (pathPoints.length == 0)
                        return

                    let pathPointActionsCName = `path${path.id}_${i}_actions`

                    cCode.push(`ActionFunction ${pathPointActionsCName}[] = {`,
                        ...pathPoints.map((pathPoint) => {
                            let action = pathPoint.resolvedProperty('action')
                            if (action)
                                pathPointActions[action] = `void ${action}(GameObject *self, PathPoint *pathPoint);`
                            else
                                action = `NULL /* to be assigned */`
                            return `${action},`
                        }),
                        '};')
                })
                
                let pathPointsCName = `path${path.id}_points`
                cCode.push(`PathPoint ${pathPointsCName}[] = {`,
                    ...path.polygon.map((point, i) =>
                        `{.x = ${point.x}, .y = ${point.y}, .numActions = ${pointsData[i].length}, .actions = ${pointsData[i].length > 0 ? `path${path.id}_${i}_actions` : 'NULL'}},`),
                    '};')
            })
            
            let pathsCName = `${cName}_paths`
            cCode.push(`Path ${pathsCName}[] = {`,
                ...objects.Path.map(path => `{.x = ${path.x}, .y = ${path.y}, .numPoints = ${path.polygon.length}, .points = path${path.id}_points},`),
                '};')

            let charactersCName = `${cName}_characters`
            cCode.push(`Character ${charactersCName}[] = {`,
                ...objects.Character.map(character => {
                    let definition
                    if (character.className.length > 0) {
                        definition = `def${character.className}`
                        objectDefs[character.className] = `extern GameObjectDefinition *${definition};`
                    } else {
                        definition = 'NULL /* to be assigned */'
                    }
                    return [
                        `{`,
                        `.x = ${character.x}, .y = ${character.y},`,
                        `.priority = ${(character.resolvedProperty('z') || 0) >= 0},`,
                        `.flipx = ${character.tileFlippedHorizontally},`,
                        `.flipy = ${character.tileFlippedVertically},`,
                        `.definition = ${definition},`,
                        `.animInd = ${character.tile?.id || 0}`,
                        '},'
                    ].join('\n')
                }),
                '};'
            )

            cCode.push(`LevelObjectGroup ${cName} = {`,
                `.numTriggers = ${objects.Trigger.length},`,
                `.triggers = ${cName}_triggers,`,
                `.numPaths = ${objects.Path.length},`,
                `.paths = ${cName}_paths,`,
                `.numCharacters = ${objects.Character.length},`,
                `.characters = ${cName}_characters`,
                '};')

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
            `#ifndef _${ fileName.replace(/\W+/g, '_')}`,
            `#define _${fileName.replace(/\W+/g, '_')}`,
            '#include "lobject.h"',
            ...Object.values(objectDefs),
            ...Object.values(triggerActions),
            ...Object.values(pathPointActions),
            `extern LevelObjectGroup *OBJECTGROUPS[];`)
        hCode.push('#endif')

        /** @type {string[]} */
        let cCode = []
        cCode.push('#include "lobject.h"',
            ...objectGroups.map(({cCode}) => cCode.join('\n')),
            `LevelObjectGroup *OBJECTGROUPS[] = {`,
            ...objectGroups.map(({cName}) => `&${cName},`),
            '};')

        let cFile = new TextFile(fileName, TextFile.WriteOnly)
        cCode.forEach(line => cFile.writeLine(line))
        cFile.commit()
        let hFile = new TextFile(fileName.replace(/\.c$/, '.h'), TextFile.WriteOnly)
        hCode.forEach(line => hFile.writeLine(line))
        hFile.commit()
    }
})