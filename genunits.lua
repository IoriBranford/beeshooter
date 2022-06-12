require "lfs"
local xml = require "libraries.pl.xml"
local pretty = require "libraries.pl.pretty"

local objecttypesPath = "data/objecttypes.xml"
local objecttypes = xml.parse(objecttypesPath, true)

local objecttypesTemplate = [[
<objecttypes>
{{<objecttype name="$_">
    {{<property name="$name" type="$type" default="$value"/>}}
</objecttype>}}
</objecttypes>
]]

local tilesetTemplate = [[
    <tileset tilewidth="$tilewidth" tileheight="$tileheight">
        {{<tile id="$id">
            <properties>
                <property name="name" value="$name"/>
            </properties>
        </tile>}}
    </tileset>
]]

local Template, Tileset, Object, Properties, Property = xml.tags("template,tileset,object,properties,property")

local function findTilesetFile(name, path)
    for entry in lfs.dir(path) do
        if entry == '.' or entry == ".." then
        else
            local filepath = path..'/'..entry
            local mode = lfs.attributes(filepath, "mode")
            if mode == "directory" then
                local found = findTilesetFile(name, filepath)
                if found then
                    return found
                end
            elseif name..".tsx" == entry then
                return filepath
            end
        end
    end
end

objecttypes = objecttypes:match(objecttypesTemplate)
lfs.chdir("data")
for name, objecttype in pairs(objecttypes) do
    local tilesetname = name
    local tilename
    local _basetype
    for _,v in pairs(objecttype) do
        if v.name == "tileset" then
            tilesetname = v.value
        elseif v.name == "tileid" then
            tilename = v.value
        elseif v.name == "_basetype" then
            _basetype = v.value
        end
    end
    if not _basetype then
        local tilesetfile = findTilesetFile(tilesetname, '.')
        local tileset = tilesetfile and xml.parse(tilesetfile, true)
        local tilewidth, tileheight = 1, 1
        local template = {}
        local gid
        if tileset then
            gid = 1
            tileset = tileset:match(tilesetTemplate)
            tilewidth = tileset.tilewidth
            tileheight = tileset.tileheight
            if tilename then
                for _, tile in pairs(tileset) do
                    if tile.name == tilename then
                        gid = gid + tonumber(tile.id)
                        break
                    end
                end
            end
            template[#template+1] = Tileset {
                firstgid = 1,
                source = "../"..tilesetfile
            }
        end

        local properties = {}
        for i = 1, #objecttype do
            properties[#properties+1] = Property(objecttype[i])
        end

        template[#template+1] = Object {
            Properties(properties),
            type = "Unit",
            gid = gid,
            width = tilewidth,
            height = tileheight,
        }

        template = Template(template)

        local templatePath = string.format("units/%s.tx", name)
        local templateFile = io.open(templatePath, "w+")
        templateFile:write(xml.tostring(template, "", " "))
        templateFile:close()
    end
end
