/// <reference types="@mapeditor/tiled-api" />

const reversePoints = (/** @type {MapObject} */ object) => {
	let polygon = object.polygon
	if (!polygon)
		return

	let x = object.x
	let y = object.y
	let reversedWorldPolygon = polygon.map((p) => {
		return { x: x + p.x, y: y + p.y }
	}).reverse()
	if (object.shape == MapObject.Polyline) {
		let p0 = reversedWorldPolygon[0]
		x = p0.x
		y = p0.y
	}
	else if (object.shape == MapObject.Polygon) {
		let length = reversedWorldPolygon.length
		let p0 = reversedWorldPolygon[length - 1]
		reversedWorldPolygon.copyWithin(1, 0, length-1)
		reversedWorldPolygon[0] = p0
	}
	object.polygon = reversedWorldPolygon.map((p) => {
		return {
			x: p.x - x,
			y: p.y - y
		}
	})
	object.x = x
	object.y = y
}

const ReversePoints = tiled.registerAction("Reverse Points", (action) => {
	let asset = tiled.activeAsset
	let selected = asset.selectedObjects
	if (!selected) {
		return
	}
	
	for (let object of selected) {
		let polygon = object.polygon
		if (!polygon)
			continue
		asset.macro("Reverse Points", () => {
			reversePoints(object)
		})
		tiled.log("Object "+object.id+" reversed")
		tiled.log("New pos: "+object.x+","+object.y)
		tiled.log("New points: "+object.polygon.map((p)=> {
			return "" + p.x + "," + p.y
		}).join(" "))
	}
})
ReversePoints.text = "Reverse Points"

tiled.extendMenu("MapView.Objects", [
	{ action: "Reverse Points" }
])

// This signal does not exist yet
// tiled.rightClicked.connect((asset) => {
// 	ReversePoints.enabled = false
// 	let selected = asset.selectedObjects
// 	if (!selected) {
// 		return
// 	}

// 	for (let object of selected) {
// 		if (object.shape == MapObject.Polyline || object.shape == MapObject.Polygon) {
// 			ReversePoints.enabled = true
// 			break
// 		}
// 	}
// })