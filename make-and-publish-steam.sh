#!/bin/bash

export STEAM=1
ACCOUNT="iori_branford@hotmail.com"
VERSION=$1

if [[ $# -le 0 ]]
then
    VERSION=$(git describe --tags --always)
else
    shift 1
fi

if [[ ! -z "$(git tag -l $VERSION)" ]]
then
    git tag -d $VERSION
fi
git tag $VERSION

export GAME_TYPE=""
./make-game.sh && ./make-windows.sh && ./make-linux.sh

steamcmd $* +login "$ACCOUNT" \
	+run_app_build "$PWD/steam/app_build_full.vdf" \
	+quit
