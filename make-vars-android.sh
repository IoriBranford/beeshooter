#!/bin/sh

. ./make-vars.sh

export GAME_TITLE="Honey Soldier"
export GAME_TITLE_NOSPACE=Honey_Soldier
export APPLICATION_ID="com.ioribranford.honeysoldier"
export ICON="@mipmap/ic_launcher"
export ICONS_DIR="$PWD/android/app/src/main/res"
export KEYSTORE_FILE="$PWD/release.keystore"
export VERSION_NAME="`git describe --tags --always`"
export VERSION_CODE=7
