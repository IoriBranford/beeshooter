/// <reference types="@mapeditor/tiled-api" />

const newObjectsFromTiles = (/** @type Tile[] */ tiles) => {
    if (!tiles)
        return null

    let prefabs = []
    let x = 0
    for (let tile of tiles) {
        let tileName = tile.property("name")
        if (!tileName)
            tileName = tile.id.toString()

        let prefab = new MapObject(tileName)
        let width = tile.width
        let height = tile.height
        prefab.width = width
        prefab.height = height
        prefab.tile = tile

        let id = tile.id
        let tileset = tile.tileset
        let columns = Math.floor(tileset.imageWidth / width)
        let column = id % columns
        let row = Math.floor(id / columns)
        prefab.x = column * width
        prefab.y = row * height

        prefabs.push(prefab)
    }

    return prefabs;
}

const addSelectedTileObjects = (objectGroup) => {
    let selectedTiles = tiled.mapEditor.tilesetsView.selectedTiles
    let prefabs = newObjectsFromTiles(selectedTiles)
    if (!prefabs)
        return
    for (let prefab of prefabs) {
        objectGroup.addObject(prefab)
    }
}

const makeObjectsFromSelectedTilesAction = tiled.registerAction("makeObjectsFromSelectedTiles", (action) => {
	let map = tiled.activeAsset
	if (!map.isTileMap) {
		tiled.alert("Not a map!")
		return
	}

    let objectGroup = map.selectedLayers[0]
    if (!objectGroup.isObjectLayer) {
		tiled.alert("Not an object layer!")
		return
    }

	map.macro("Make objects from tiles", () => {
		addSelectedTileObjects(objectGroup)
	})
})
makeObjectsFromSelectedTilesAction.text = "Make objects from selected tiles"

tiled.extendMenu("Layer", [
	{ separator: true },
	{ action: "makeObjectsFromSelectedTiles" },
])

tiled.extendMenu("LayerView.Layers", [
	{ separator: true },
	{ action: "makeObjectsFromSelectedTiles" },
])