#!/bin/sh
set -e
GAME_DIR=${GAME_DIR:="$PWD/game"}
VERSION=$(git describe --tags --always)
echo $VERSION > "$GAME_DIR/version"
sed -i -r -e "s/-\\w+$//" "$GAME_DIR/version"
echo $VERSION
