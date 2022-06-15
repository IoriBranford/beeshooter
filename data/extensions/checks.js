function tryFixPolyline(object) {
    const margin = 5    // pixels

    let polygon = object.polygon
    if (polygon.length < 3)
        return false    // can't turn into polygon
    let first = polygon[0]
    let last = polygon[polygon.length - 1]

    // check if points are too far away from each other
    if (Math.abs(first.x - last.x) > margin)
        return false
    if (Math.abs(first.y - last.y) > margin)
        return false

    // change polyline to polygon
    polygon.pop()
    object.asset.macro("Change Polyline to Polygon", function() {
        object.polygon = polygon
        object.shape = MapObject.Polygon
    })

    return true
}

function focusCollisionObject(tileset, tile, object) {
    // open tileset and select tile
    tiled.open(tileset.fileName)  
    tileset.selectedTiles = [tile]
    
    // switch to collision editor mode, select the object and focus it
    let collisionEditor = tiled.tilesetEditor.collisionEditor
    collisionEditor.show()
    collisionEditor.selectedObjects = [object]
    collisionEditor.focusObject(object)
}

function checkTileset(tileset) {
    for (let tile of tileset.tiles) {
        let objectGroup = tile.objectGroup
        if (!objectGroup)
            continue

        for (let object of objectGroup.objects) {
            if (object.shape == MapObject.Polyline) {
                let callback = focusCollisionObject.bind(null, tileset, tile, object)

                if (tryFixPolyline(object))
                    tiled.warn("converted polyline to polygon in '" + tileset.name + "' on tile " + tile.id + " (object id " + object.id + ")", callback)
                else
                    tiled.error("polyline detected in '" + tileset.name + "' on tile " + tile.id + " (object id " + object.id + ")", callback)
            }
        }
    }
}

let checkForPolylineCollisionShapes = tiled.registerAction('CheckForPolylineCollisionShapes', function(action) {
    let checkedTilesets = {}

    let check = function(tileset) {
        if (!checkedTilesets[tileset]) {
            checkTileset(tileset)
            checkedTilesets[tileset] = true
        }
    }

    for (let asset of tiled.openAssets) {
        if (asset.isTileset)
            check(asset)
        else if (asset.isTileMap)
            asset.tilesets.forEach(check)
    }
})
checkForPolylineCollisionShapes.text = "Check for Polylines in Open Tilesets"


let removeUnusedTilesets = tiled.registerAction('RemoveUnusedTilesets', function(action) {
    const map = tiled.activeAsset;
    if (!map.isTileMap) {
        tiled.error("Not a tile map!");
        return;
    }

    const unusedTilesets = []
    const usedTilesets = map.usedTilesets()

    for (const t of map.tilesets)
        if (usedTilesets.indexOf(t) == -1)
            unusedTilesets.push(t);

    if (unusedTilesets.length > 0) {
        map.macro("Remove Unused Tilesets", function() {
            for (const t of unusedTilesets)
                map.removeTileset(t);
        });
    }
})    
removeUnusedTilesets.text = "Remove Unused Tilesets"

function cutCommonPath(fileA, fileB) {
    while (true) {
        let slashA = fileA.indexOf('/')
        let slashB = fileB.indexOf('/')

        if (slashA >= 0 && slashA == slashB && fileA.substring(0, slashA) == fileB.substring(0, slashB)) {
            fileA = fileA.substring(slashA + 1)
            fileB = fileB.substring(slashA + 1)
        } else {
            break
        }
    }

    return fileB
}

// EXAMPLE OUTPUT
//
//  Tile image name: XXXXXX
//  Number of Colliders: N
//  Collider 1: Bounding poly N Object Type N
//  Collider 2: Bounding poly N Object Type N
//  Etc
//  Tile image name: YYYYYY
//  Number of Colliders: N
//  Collider 1: Bounding poly N Object Type N
//  Collider 2: Bounding poly N Object Type N
//  Collider 3: Bounding poly N Object Type N
//
function listTilesAndColliders(fileName, usedTiles) {
    for (const tile of usedTiles) {
        const collisions = tile.objectGroup
        const objectCount = collisions ? collisions.objectCount : 0
        const imageFileName = tile.imageFileName

        tiled.log("Tile image name: " + cutCommonPath(fileName, imageFileName))
        tiled.log("Number of Colliders: " + objectCount)

        if (collisions) {
            let i = 0
            for (const o of collisions.objects) {
                ++i

                let shape = ""
                let type = ""

                switch (o.shape) {
                case MapObject.Rectangle:
                    shape = " Rectangle"
                    break
                case MapObject.Polygon:
                    shape = " Bouding poly " + o.polygon.length
                    break
                case MapObject.Polyline:
                    shape = " Polyline " + o.polygon.length
                    break
                case MapObject.Ellipse:
                    shape = " Ellipse"
                    break
                case MapObject.Text:
                    shape = " Text"
                    break
                case MapObject.Point:
                    shape = " Point"
                    break
                }

                if (o.type.length > 0)
                    type = " Object Type " + o.type

                tiled.log("Collider " + i + ":" + shape + type)
            }
        }

        tiled.log("")
    }
}

let listUsedTilesAndColliders = tiled.registerAction('ListUsedTilesAndColliders', function(action) {
    const map = tiled.activeAsset;
    if (!map.isTileMap) {
        tiled.error("Not a tile map!");
        return;
    }

    const usedTiles = new Set()

    function processLayers(thing) {
        for (let i = thing.layerCount - 1; i >= 0; i--) {
            const layer = thing.layerAt(i)
            if (layer.isGroupLayer) {
                processLayers(layer)
            }
            else if (layer.isObjectLayer) {
                for (const o of layer.objects) {
                    const tile = o.tile
                    if (!tile)
                        continue

                    usedTiles.add(tile)
                }
            }
        }
    }

    processLayers(map)
    listTilesAndColliders(map.fileName, usedTiles)
})
listUsedTilesAndColliders.text = "List Used Tiles and Collider Counts"

let listUsedTilesAndCollidersForTileset = tiled.registerAction('ListUsedTilesAndCollidersForTileset', function(action) {
    const tileset = tiled.activeAsset;
    if (!tileset.isTileset) {
        tiled.error("Not a tileset!");
        return;
    }

    listTilesAndColliders(tileset.fileName, tileset.tiles)
})
listUsedTilesAndCollidersForTileset.text = "List Tiles and Collider Counts"

tiled.extendMenu("Map", [
    { separator: true },
    { action: "RemoveUnusedTilesets" },
    { action: "ListUsedTilesAndColliders" },
])

tiled.extendMenu("Tileset", [
    { separator: true },
    { action: "CheckForPolylineCollisionShapes" },
    { action: "ListUsedTilesAndCollidersForTileset" },
])
