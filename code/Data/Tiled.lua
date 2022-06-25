local Time = require "System.Time"
local Color= require "Data.Color"
local TilePacking = require "Data.TilePacking"
local Tiled = {}
Tiled.fontpath = ""
Tiled.animationtimeunit = "milliseconds"

local AnimationTimeUnits = {
    milliseconds = 1,
    seconds = 1 / 1000,
    fixedupdates = Time.FixedUpdateRate / 1000
}

local AnimationTimeUnitToSecs = {
    milliseconds = .001,
    seconds = 1,
    fixedupdates = 1 / Time.FixedUpdateRate
}

--[[
    Tile cache and map loader.

    Adds and modifies the following fields for convenience:

    map.directory                       Directory path containing the file
    map.objects                         All map objects by id
    map.tiles                           All map tiles by gid
    map.backgroundcolor                 Converted from range 0...255 to range 0.0...1.0
    map[prop]=val                       Map properties become fields of the map*
    map[objprop]                        Points to actual object instead of a reference object

    tileset[prop]=val                   Tileset properties become fields of the tileset*

    tileset[i]                          Each tile in the tileset
    tileset[name]                       Access the tile by name if it has a string property "name"
    tileset[i].image                    Image
    tileset[i].quad                     Area of the image
    tileset[i].tileset                  Reference back to tile's tileset
    tileset[i].originx                  Origin x (negative of tile offset)
    tileset[i].originy                  Origin y (negative of tile offset)
    tileset[i][prop]=val                Tile properties become fields of the tile*

    tileset[i].animation.duration       Total duration of all frames of animation, in seconds
                                        Optionally set Tiled.animationtimeunit="seconds" to convert to seconds
    tileset[i].animation[i].duration    Optionally converted to seconds if Tiled.animationtimeunit=="seconds"
    tileset[i].animation[i].tile        Tile within the tileset

    tileset[i].shapes                   = tileset[i].objectGroup.objects
    tileset[i].shapes[i].x              Offset by -originx
    tileset[i].shapes[i].y              Offset by -originy
    tileset[i].shapes[i][prop]=val      Shape properties become fields of the shape*
    tileset[i].shapes[name]             You can access the shape by name if it has one

    tilelayer.chunk.data                Decompressed and decoded into array of gids
    tilelayer.chunk.tilewidth           = map.tilewidth
    tilelayer.chunk.tileheight          = map.tileheight
    tilelayer.chunk.tilebatch           SpriteBatch of the chunk
    tilelayer.data                      Decompressed and decoded into array of gids
    tilelayer.tilewidth                 = map.tilewidth
    tilelayer.tileheight                = map.tileheight
    tilelayer.tilebatch                 SpriteBatch of the whole layer
    tilelayer.batchanimations           Indices in the data which have animated tiles

    map.layers[name]                    You can access the top-level layer by name if it has one
    layer.x                             = layer.offsetx
    layer.y                             = layer.offsety
    layer.z                             Drawing order, default depends on layer order, set with layer property "z" (float)
    layer[prop]=val                     Layer properties become fields of the layer*
    layer[objprop]                      Points to actual object instead of a reference object

    objectgroup[i]                      Each object in the object group
    objectgroup[name]                   You can access the object by name if it has one
    object.z                            Drawing order, default is objectgroup's z, set with object property "z" (float)
    object.type                         Copy of Tiled 1.9's object.class for backward compatibility
    object.tile                         Object tile from gid
    object.rotation                     Converted from degrees to radians, LOVE's standard rotation unit
    object.scalex                       Object scale x from gid flipx and tile width
    object.scaley                       Object scale y from gid flipy and tile height
    object[prop]=val                    Object properties become fields of the object*
    object.points                       Polyline or polygon converted to array {x1, y1, x2, y2, ...}
                                        Check object.shape to know if polygon or polyline
    object.polygon                      Renamed to points
    object.polyline                     Renamed to points
    object[objprop]                     Points to actual object instead of a reference object
    object.string                       Copy of object.text
    object.font                         Font object based on fontfamily, bold, italic, etc
                                        Font file should be in Tiled.fontpath and follow this naming:
                                        "fontfamily.ttf"
                                        "fontfamily Bold.ttf"
                                        "fontfamily Italic.ttf"
                                        "fontfamily Bold Italic.ttf"
                                        "fontfamily pixelsize.fnt"
                                        "fontfamily Bold pixelsize.fnt"
                                        "fontfamily Italic pixelsize.fnt"
                                        "fontfamily Bold Italic pixelsize.fnt"

    layergroup[i]                       Each layer in a layer group
    layergroup[name]                    You can access the in-group layer by name if it has one

    * Can't overwrite existing fields

    Unsupported:
        Iso and hex maps
        Diagonal flip flag
        Tileset margin and spacing
        External tilesets
        Tile layer using multiple tilesets
        Non-constant framerate in tile layer animation
]] --

function Tiled.clearCache()
    local tilesets = Tiled.tilesets
    if tilesets then
        for _, tileset in pairs(Tiled.tilesets) do
            for i = 0, tileset.tilecount - 1 do
                tileset[i].tileset = nil
            end
        end
    end
    Tiled.tilesets = {}
    Tiled.images = {}
    Tiled.fonts = {}
end
Tiled.clearCache()

function Tiled.setFontPath(fontpath)
    Tiled.fontpath = fontpath
    if fontpath[-1] ~= "/" then
        fontpath = fontpath.."/"
    end
end

local function addIfNew(t, k, v)
    if t[k] then
        print(string.format("W: tried to overwrite duplicate or reserved field name %s in %s", k, t.name or t))
    else
        t[k] = v
    end
end

local function resolveObjectProperties(properties, mapobjects)
    for k,v in pairs(properties) do
        if type(v) == "table" then
            properties[k] = mapobjects[v.id]
        end
    end
end

local function propertiesToFields(t, dest)
    local properties = t.properties
    if properties then
        dest = dest or t
        for k, v in pairs(properties) do
            addIfNew(dest, k, v)
        end
        t.properties = nil
    end
end

local function triangulate(points)
    local cantriangulate, triangles = pcall(love.math.triangulate, points)
    if cantriangulate then
        local tris = {}
        for i = 1, #triangles do
            local triangle = triangles[i]
            for i = 1, #triangle do
                tris[#tris+1] = triangle[i]
            end
        end
        return tris
    end
    return false, triangles
end

local function processPoly(object)
    local poly = object.polygon or object.polyline
    if poly then
        local points = {}
        local x = object.x
        local y = object.y
        object.x = 0
        object.y = 0
        object.points = points
        object.polygon = nil
        object.polyline = nil
        for i = 1, #poly do
            local point = poly[i]
            local px = x + point.x
            local py = y + point.y
            points[#points+1] = px
            points[#points+1] = py
        end
        if object.shape == "polygon" then
            object.triangles = triangulate(points)
        end
    end
end

function Tiled.getTile(tileset, tileid)
    return Tiled.tilesets[tileset][tileid]
end

function Tiled.addTileset(tileset)
    -- assert(tileset.objectalignment == "topleft", "Unsupported objectalignment "..tileset.objectalignment)
    assert(not tileset.source,
        "External tilesets unsupported. Please export with 'Embed Tilesets' enabled in export options.")

    local alltilesets = Tiled.tilesets

    local tilesetname = tileset.name
    if alltilesets[tilesetname] then
        return alltilesets[tilesetname]
    end
    alltilesets[tilesetname] = tileset

    local image = Tiled.loadImage(tileset.image)
    local columns = tileset.columns
    local n = tileset.tilecount
    local tw = tileset.tilewidth
    local th = tileset.tileheight

    local ObjectAlignments = {
        topleft     = {0.0, 0.0},
        top         = {0.5, 0.0},
        topright    = {1.0, 0.0},
        left        = {0.0, 0.5},
        center      = {0.5, 0.5},
        right       = {1.0, 0.5},
        bottomleft  = {0.0, 1.0},
        bottom      = {0.5, 1.0},
        bottomright = {1.0, 1.0},
        unspecified  = {0.0, 1.0},
    }
    local alignment = tileset.objectalignment or "unspecified"
    alignment = ObjectAlignments[alignment]
    local objectox, objectoy = alignment[1]*tw, alignment[2]*th
    local ox, oy = 0, 0
    if tileset.tileoffset then
        ox = -tileset.tileoffset.x
        oy = -tileset.tileoffset.y
        objectox = objectox + ox
        objectoy = objectoy + oy
    end

    for i = 0, n - 1 do
        local c = i % columns
        local r = math.floor(i / columns)
        local tx = c * tw
        local ty = r * th
        local tile = {
            tileset = tileset,
            image = image,
            quad = love.graphics.newQuad(tx, ty, tw, th, image),
            width = tw,
            height = th,
            originx = ox,
            originy = oy,
            objectoriginx = objectox,
            objectoriginy = objectoy
        }
        tileset[i] = tile
    end

    local animationtimescale = AnimationTimeUnits[Tiled.animationtimeunit] or 1
    local tilesdata = tileset.tiles
    if not tilesdata then
        return
    end
    for i = 1, #tilesdata do
        local tiledata = tilesdata[i]
        local tileid = tiledata.id

        local animation = tiledata.animation
        if animation then
            local totalduration = 0
            for f = 1, #animation do
                local frame = animation[f]
                local duration = frame.duration
                totalduration = totalduration + duration
                frame.duration = duration * animationtimescale
                frame.tile = tileset[frame.tileid]
            end
            animation.duration = totalduration * animationtimescale
        end

        local shapes = tiledata.objectGroup
        if shapes then
            shapes = shapes.objects
            for i = 1, #shapes do
                local shape = shapes[i]
                shape.x = shape.x - objectox
                shape.y = shape.y - objectoy
                local name = shape.name or ""
                if #name > 0 then
                    shapes[name] = shape
                end
                processPoly(shape)
                propertiesToFields(shape)
            end
        end

        local tile = tileset[tileid]
        tile.id = tileid
        tile.type = tiledata.type
        local properties = tiledata.properties
        local name = properties and properties.name
        if name then
            tileset[name] = tile
        end
        tile.animation = animation
        tile.shapes = shapes

        propertiesToFields(tiledata, tile)
    end

    propertiesToFields(tileset)
    return tileset
end

function Tiled.isAnimationEnded(animation, i, t)
    local duration = animation[i].duration
    while t >= duration do
        if i >= #animation then
            return true
        end
        t = t - duration
        i = i + 1
        duration = animation[i].duration
    end
end

function Tiled.getAnimationUpdate(animation, i, t)
    local duration = animation[i].duration
    while t >= duration do
        t = t - duration
        i = (i >= #animation) and 1 or (i + 1)
        duration = animation[i].duration
    end
    return i, t
end

local function decodeGids(data, encoding, compression)
    if encoding == "lua" then
        return data
    end
    local gids = {}
    -- if encoding == "csv" then
    --     for gid in data:gmatch("%d+") do
    --         gids[#gids + 1] = tonumber(gid)
    --     end
    --     return gids
    -- else
    if encoding == "base64" then
        data = love.data.decode("data", encoding, data)
        if compression then
            data = love.data.decompress("data", compression, data)
        end
    end
    local ffi = require "ffi"
    local pointer = ffi.cast("uint32_t*", data:getFFIPointer())
    local n = math.floor(data:getSize() / ffi.sizeof("uint32_t"))

    for i = 0, n - 1 do
        gids[#gids + 1] = pointer[i]
    end
    return gids
end

local function parseGid(gid)
    local h, v = 1, 1
    if gid > 0x080000000 then
        h = -h
        gid = gid - 0x080000000
    end
    if gid > 0x040000000 then
        v = -v
        gid = gid - 0x040000000
    end
    return gid, h, v
end
Tiled.parseGid = parseGid

function Tiled.newTileArray(tiles, gids)
    local array = {}
    for i = 1, #gids do
        array[i] = tiles[gids[i]]
    end
    return array
end

function Tiled.newTileBatch(tiles, gids, cellwidth, cellheight, cols, rows)
    local tile
    for i = 1, #gids do
        tile = tiles[gids[i]]
        if tile then
            break
        end
    end
    if not tile then
        return
    end

    local tilebatch = love.graphics.newSpriteBatch(tile.image, cols * rows)
    local batchanimations = {}
    local i = 1
    local y = cellheight
    for r = 1, rows do
        local x = 0
        for c = 1, cols do
            local gid, sx, sy = parseGid(gids[i])
            local tile = tiles[gid]
            if tile then
                local hw, hh = tile.width / 2, tile.height / 2
                tilebatch:add(tile.quad, x + hw - tile.originx, y - hh - tile.originy, 0, sx, sy, hw, hh)
                batchanimations[i] = tile.animation
            else
                tilebatch:add(x, y, 0, 0, 0)
            end
            i = i + 1
            x = x + cellwidth
        end
        y = y + cellheight
    end

    return tilebatch, batchanimations
end

function Tiled.animateChunk(sceneobject, dt)
    local batchanimations = sceneobject.batchanimations
    if not batchanimations then
        return
    end

    local chunkwidth = sceneobject.width
    local tilewidth = sceneobject.tilewidth
    local tileheight = sceneobject.tileheight
    local gids = sceneobject.data
    local tilebatch = sceneobject.spritebatch
    local time = sceneobject.animationtime + dt
    sceneobject.animationtime = time
    for i, animation in pairs(batchanimations) do
        local _, sx, sy = parseGid(gids[i])
        local nframes = #animation
        local _, progress = math.modf(time / animation.duration)
        local frameindex = math.floor(nframes * progress) + 1
        local tile = animation[frameindex].tile
        local r = math.floor((i-1) / chunkwidth) + 1
        local c =           ((i-1) % chunkwidth)
        local x = c*tilewidth
        local y = r*tileheight
        local hw, hh = tile.width / 2, tile.height / 2
        tilebatch:set(i, tile.quad, x + hw - tile.originx, y - hh - tile.originy, 0, sx, sy, hw, hh)
    end
end

function Tiled.loadImage(imagefile)
    local image = Tiled.images[imagefile] or love.graphics.newImage(imagefile)
    Tiled.images[imagefile] = image
    image:setFilter("nearest", "nearest")
    return image
end

local function setLayersZ(layers, z1, dz)
    local layer1 = layers[1]
    if layer1 then
        layer1.z = layer1.properties.z or z1
        layer1.properties.z = nil
    end
    for i = 2, #layers do
        local layer = layers[i]
        layer.z = layer.properties.z or (layers[i-1].z + dz)
        layer.properties.z = nil
    end
end

function Tiled.load(mapfile)
    local map, err = love.filesystem.load(mapfile)
    assert(map, err)
    map = map()

    local directory = string.match(mapfile, "^(.+/)") or ""
    map.directory = directory

    if map.image then
        local tileset = map
        tileset.image = directory..tileset.image
        tileset = Tiled.addTileset(tileset)
        return tileset
    end

    if map.backgroundcolor then
        for i, c in ipairs(map.backgroundcolor) do
            map.backgroundcolor[i] = c / 256
        end
    end

    local maptiles = {}
    map.tiles = maptiles
    local mapobjects = {}
    map.objects = mapobjects

    local function findObjects(layers)
        for i = 1, #layers do
            local layer = layers[i]
            if layer.objects then
                local objects = layer.objects
                for i = 1, #objects do
                    local object = objects[i]
                    mapobjects[object.id] = object
                end
            elseif layer.layers then
                findObjects(layer.layers)
            end
        end
    end

    local tilesets = map.tilesets
    for i = 1, #tilesets do
        local tileset = tilesets[i]
        tileset.image = directory..tileset.image
        tileset = Tiled.addTileset(tileset)
        for t = 0, tileset.tilecount - 1 do
            maptiles[#maptiles + 1] = tileset[t]
        end
    end

    local packimagedata, packimageerr = TilePacking.pack(map)
    if packimagedata then
        -- TilePacking.save(map, mapfile..".quads", mapfile..".png", packimagedata)
    else
        print(packimageerr)
    end

    local cellwidth = map.tilewidth
    local cellheight = map.tileheight
    local cols = map.width
    local rows = map.height

    local function doLayer(layer, parent)
        local layername = layer.name
        if layername ~= "" then
            addIfNew(parent, layername, layer)
        end
        local layertype = layer.type
        layer.x = layer.offsetx
        layer.y = layer.offsety
        local z = layer.z
        if layertype == "group" then
            local grouplayers = layer.layers
            local scalez = (parent.scalez or 1) / #grouplayers
            layer.scalez = scalez
            setLayersZ(grouplayers, z, scalez)
            for i = 1, #grouplayers do
                local grouplayer = grouplayers[i]
                layer[i] = grouplayer
                doLayer(grouplayer, layer)
            end
            layer.layers = nil
        elseif layertype == "tilelayer" then
            local chunks = layer.chunks
            local encoding = layer.encoding
            local compression = layer.compression
            layer.tilewidth = cellwidth
            layer.tileheight = cellheight
            if chunks then
                for i = 1, #chunks do
                    local chunk = chunks[i]
                    local gids = decodeGids(chunk.data, encoding, compression)
                    chunk.data = gids
                    chunk.tilewidth = cellwidth
                    chunk.tileheight = cellheight
                    chunk.tilebatch, chunk.batchanimations = Tiled.newTileBatch(maptiles, gids, cellwidth, cellheight, chunk.width,
                                          chunk.height)
                end
            else
                local gids = decodeGids(layer.data, encoding, compression)
                layer.data = gids
                layer.tilebatch, layer.batchanimations = Tiled.newTileBatch(maptiles, gids, cellwidth, cellheight, cols, rows)
            end
        elseif layertype == "objectgroup" then
            local objects = layer.objects
            for i = 1, #objects do
                local object = objects[i]
                layer[i] = object
                local objectname = object.name
                if objectname ~= "" then
                    addIfNew(layer, objectname, object)
                end
                local objecttype = object.class or object.type
                local gid = object.gid
                if gid then
                    local sx, sy
                    gid, sx, sy = parseGid(gid)
                    local tile = maptiles[gid]
                    object.tile = tile
                    object.scalex = sx * object.width / tile.width
                    object.scaley = sy * object.height / tile.height

                    if objecttype == "" then
                        objecttype = tile.type
                    end
                end
                object.type = objecttype
                processPoly(object)
                local text = object.text
                if text then
                    local fontfamily = object.fontfamily or "default"
                    local fontname = string.format("%s%s%s", fontfamily,
                        object.bold and " Bold" or "",
                        object.italic and " Italic" or "")
                    local ttf = Tiled.fontpath..fontname..".ttf"
                    local pixelsize = object.pixelsize or 16
                    fontname = string.format("%s %d", fontname, pixelsize)
                    local fnt = Tiled.fontpath..fontname..".fnt"
                    local font = Tiled.fonts[fontname]
                        or love.filesystem.getInfo(fnt) and love.graphics.newFont(fnt)
                        or love.filesystem.getInfo(ttf) and love.graphics.newFont(ttf, pixelsize)
                        or love.graphics.newFont(pixelsize)
                    if not Tiled.fonts[fontname] then
                        font:setFilter("nearest", "nearest")
                        Tiled.fonts[fontname] = font
                    end
                    object.string = text
                    object.font = font
                    if object.color then
                        object.color = { Color.normalize(object.color) }
                    end
                end
                object.rotation = math.rad(object.rotation)
                resolveObjectProperties(object.properties, mapobjects)
                propertiesToFields(object)
                object.z = object.z or z
            end
            layer.objects = nil
        elseif layertype == "imagelayer" then
            layer.image = directory..layer.image
            layer.image = Tiled.loadImage(layer.image)
        end
        resolveObjectProperties(layer.properties, mapobjects)
        propertiesToFields(layer)
    end

    local layers = map.layers
    setLayersZ(layers, 1, 1)
    findObjects(layers)

    for i = 1, #layers do
        local layer = layers[i]
        doLayer(layer, layers)
    end
    resolveObjectProperties(map.properties, mapobjects)
    propertiesToFields(map)

    return map
end

return Tiled
