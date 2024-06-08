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
        /**
         * @type {string[]}
         */
        let cCode = []
        /**
         * @type {string[]}
         */
        let hCode = []

        /**
         * 
         * @param {LevelObjectGroup} objectgroup 
         */
        let doObjectGroup = (objectgroup) => {
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

            cCode.push(`{`)

            cCode.push(`.triggers = {`)
            objects.Trigger.forEach((trigger) => {
                cCode.push(`{`,
                    `.y = ${Math.ceil(trigger.y)},`,
                    `.action = ${trigger.resolvedProperty('action')},`,
                    '},')
            })
            cCode.push(`},`) // triggers

            cCode.push(`.paths = {`)
            objects.Path.forEach((path) => {
                cCode.push(`{`,
                    `.x = ${path.x}, .y = ${path.y},`,
                    `.points = {`)
                path.polygon.forEach((point) => {
                    let pathPoints = objects.PathPoint.filter(
                        (pathPoint) => pathPoint.pos == path.pos + point)
                    cCode.push(`{`,
                        `.x = ${point.x}, .y = ${point.y},`,
                        `.actions = {`)
                    cCode.push(...pathPoints.map((pathPoint) =>
                        `${pathPoint.resolvedProperty('action')},`))
                    cCode.push(`}`) // actions
                    cCode.push(`},`) // path point
                })
                cCode.push(`},`) // points
                cCode.push(`},`) // path
            })
            cCode.push(`},`) // paths

            cCode.push(`.characters = {`)
            objects.Character.forEach((character) => {
                let tile = character.tile
                if (!tile || !tile.tileset) return
                cCode.push(
                    `{`,
                    `.x = ${character.x}, .y = ${character.y},`,
                    `.priority = ${(character.resolvedProperty('z') || 0) >= 0},`,
                    `.flipx = ${character.tileFlippedHorizontally},`,
                    `.flipy = ${character.tileFlippedVertically},`,
                    `.spritedef = spr${tile.tileset.name},`,
                    `.animInd = ${tile.id}`
                )
                cCode.push(`},`) // character
            })
            cCode.push(`}`) // characters

            cCode.push(`},`) // objectgroup
        }

        /**
         * 
         * @param {Layer[]} layers 
         */
        let doLayers = (layers) => {
            layers.forEach(layer => {
                if (layer.isGroupLayer) {
                    /** @type {GroupLayer} */
                    let group = layer
                    doLayers(group.layers)
                } else if (layer.isObjectLayer) {
                    doObjectGroup(layer)
                }
            });
        }

        hCode.push(
            `#ifndef _${fileName.replace('\W', '_')}`,
            `#define _${fileName.replace('\W', '_')}`,
            '#include "lobject.h"',
            `const LevelObjectGroup OBJECTGROUPS[];`)
        hCode.push('#endif')

        cCode.push('#include "lobject.h"')
        cCode.push(`static const LevelObjectGroup OBJECTGROUPS[] = {`)
        let stage = map.layers.find((layer) => layer.name == 'stage')
        doLayers(stage.layers)
        cCode.push(`};`)

        let cFile = new TextFile(fileName, TextFile.WriteOnly)
        cCode.forEach(line => cFile.writeLine(line))
        cFile.commit()
        let hFile = new TextFile(fileName.replace(/\.c$/, '.h'), TextFile.WriteOnly)
        hCode.forEach(line => hFile.writeLine(line))
        hFile.commit()
    }
})