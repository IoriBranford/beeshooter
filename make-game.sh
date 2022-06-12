#!/bin/sh
set -e

LUA=${LUA:=luajit}
GAME_TYPE=${GAME_TYPE:=demo}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}

if [ -e $GAME_ASSET ]
then
	rm $GAME_ASSET
fi

git describe --tags --always > version
export LUA_PATH="${LUA_PATH};./?.lua;./libraries/?.lua"
zip -r ${GAME_ASSET} conf.lua main.lua libraries code shaders version $($LUA list-game-files.lua data/gamefiles-${GAME_TYPE}.txt)
