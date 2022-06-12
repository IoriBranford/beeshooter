#!/usr/bin/lua
--
--------------------------------------------------------------------------------
--         File:  list-game-files.lua
--
--        Usage:  ./list-game-files.lua <gamefilelist>
--
--  Description:  List files for game asset package
--
--      Options:  ---
-- Requirements:  luafilesystem
--         Bugs:  ---
--        Notes:  ---
--       Author:  Iori Branford <ioribranford@gmail.com>
-- Organization:  
--      Version:  1.5
--      Created:  07/10/2018
--     Revision:  10/21/2021
--------------------------------------------------------------------------------
--

local AssetTypes = {
	ogg = true,
	png = true,
	vgz = true,
	vgm = true,
}

require "lfs"

local args = {...}
local rootfile = args[1]
assert(rootfile, "Usage: list-game-files.lua <gamefilelist>")

local assets = {}

local log = io.open(rootfile..".log", "w")

-- log:write("Listing assets from main game file ", rootfile)

local function isAsset(filepath)
    local ext = filepath:match("%.(%w+)$")
	return ext and AssetTypes[ext] and lfs.attributes(filepath)
end

local function listAsset(filepath)
	if not assets[filepath] then
		assets[filepath] = filepath
		print(filepath)
        -- log:write(filepath, ' added\n')
    end
end

local function listIfAsset(filepath)
    if isAsset(filepath) then
        listAsset(filepath)
	end
end

local function listAssetsInTable(t, dir)
	for _, filepath in pairs(t) do
		if type(filepath)=="string" then
			listIfAsset(dir..'/'..filepath)
		elseif type(filepath)=="table" then
			listAssetsInTable(filepath, dir)
		end
	end
end

local function listAssets(filepath)
    local attr, err = lfs.attributes(filepath)
    if not attr then
        log:write("ERROR: ", err, '\n')
        return
    end

    local ext = filepath:match("%.(%w+)$")
    if attr.mode == "directory" then
        listAsset(filepath)
        -- for f in lfs.dir(filepath) do
        --     if f == '.' or f == '..' then
        --     else
        --         listAssets(filepath..'/'..f)
        --     end
				-- end
    elseif ext == "txt" then
        local dir = filepath:match("^(.+)/") or '.'
        for f in io.lines(filepath) do
            listAssets(dir..'/'..f)
				end
    elseif ext == "lua" then
		listAsset(filepath)
		local map = dofile(filepath)
		if map then
            local dir = filepath:match("^(.+)/") or '.'
			listAssetsInTable(map, dir)
		end
    elseif ext == "csv" then
		listAsset(filepath)
        local dir = filepath:match("^(.+)/") or '.'
        for row in io.lines(filepath) do
            for f in row:gmatch("%s*([^,]-)%s*,") do
                listIfAsset(dir..'/'..f)
		    end
            local f = row:match("%s*([^,]-)%s*$")
            listIfAsset(dir..'/'..f)
	    end
    else
        listIfAsset(filepath)
    end
end

listAssets(rootfile)

log:close()