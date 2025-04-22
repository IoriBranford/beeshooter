#!/bin/sh

. ./make-vars.sh

export GAME_TITLE="Honey Soldier"
export GAME_TITLE_NOSPACE=Honey_Soldier
export APPLICATION_ID="com.ioribranford.honeysoldier"
export ICON="@mipmap/ic_launcher"
export ICONS_DIR="$PWD/android/app/src/main/res"
export KEYSTORE_FILE="$PWD/release.keystore"
export VERSION_NAME="0.3-android14"
export VERSION_CODE=14
export PACKAGE_TYPES="assemble bundle"
export APP_TYPES="embed"
export RECORD_TYPES="noRecord"
export BUILD_TYPES="release"
