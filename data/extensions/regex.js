/// <reference types="@mapeditor/tiled-api" />

// tiled.menus = Command,Edit,File,GroupLayer,Help,Layer,LayerView.Layers,Map,MapView.Objects,New,NewLayer,ProjectView.Files,PropertiesView.Properties,RecentFiles,ShowObjectNames,Snapping,Tileset,TilesetView.Tiles,UnloadWorld,View

const regexReplaceObjectsProperty = (/**@type {TiledObject[]} */ selectedObjects, property, searchPattern, replacePattern) => {
    if (property == "name" && selectedObjects[0].name) {
        for (let object of selectedObjects) {
            object.name = object.name.replace(searchPattern, replacePattern)
        }
    } else {
        for (let object of selectedObjects) {
            let value = object.property(property)
            let type = typeof(value)
            if (type != "string")
                continue
            object.setProperty(property, value.replace(searchPattern, replacePattern))
        }
    }
}

const regexReplacePropertyValues = (/**@type {TiledObject[]} */ selectedObjects) => {
    if (!selectedObjects || selectedObjects.length < 1)
        return
    let key = tiled.prompt("Property to change:")
    if (key.length < 1)
        return
    let searchPattern = tiled.prompt("Search for pattern:", ".+")
    if (searchPattern.length < 1)
        return
    searchPattern = new RegExp(searchPattern, 'g')
    let replacePattern = tiled.prompt("Replace with pattern:", "$&")
    if (replacePattern.length < 1)
        return
    tiled.activeAsset.macro("Regex replace property values", () => {
        regexReplaceObjectsProperty(selectedObjects, key, searchPattern, replacePattern)
    })
}

const regexReplaceObjectPropertyValuesAction = tiled.registerAction("regexReplaceObjectPropertyValues", (action) => {
    let asset = tiled.activeAsset
    let selected
    if (asset.isTileMap)
        selected = asset.selectedObjects
    else if (asset.isTileset) {
        selected = tiled.tilesetEditor.collisionEditor.selectedObjects
    }
    regexReplacePropertyValues(selected)
})
regexReplaceObjectPropertyValuesAction.text = "Regex replace property values"

tiled.extendMenu("MapView.Objects", [
	{ separator: true },
	{ action: "regexReplaceObjectPropertyValues" },
])

const regexReplaceTilePropertyValuesAction = tiled.registerAction("regexReplaceTilePropertyValues", (action) => {
    let asset = tiled.activeAsset
    let selected
    if (asset.isTileMap) {
    } else if (asset.isTileset) {
        selected = asset.selectedTiles
    }
    regexReplacePropertyValues(selected)
})
regexReplaceTilePropertyValuesAction.text = "Regex replace property values"

tiled.extendMenu("TilesetView.Tiles", [
	{ separator: true },
	{ action: "regexReplaceTilePropertyValues" },
])