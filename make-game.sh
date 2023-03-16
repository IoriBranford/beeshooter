#!/bin/sh
set -e

. ./make-vars.sh

LUA=${LUA:=luajit}
GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
GAME_DIR=${GAME_DIR:="$PWD"}

if [ -e $GAME_ASSET ]
then
	rm $GAME_ASSET
fi

OUTDIR="$PWD"
cd "$GAME_DIR"
git describe --tags --always > version
zip -r "$OUTDIR/${GAME_ASSET}" *
