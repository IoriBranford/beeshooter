#!/bin/sh
set -e

. ./make-vars.sh

LUA=${LUA:=luajit}
GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}

if [ -e $GAME_ASSET ]
then
	rm $GAME_ASSET
fi

git describe --tags --always > version
export LUA_PATH="${LUA_PATH};./?.lua;./libraries/?.lua"
zip -r ${GAME_ASSET} version $(cat game-files.txt)
