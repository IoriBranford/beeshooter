#!/bin/sh

. ./make-vars.sh

export GAME_TITLE="Honey Soldier"
export GAME_TITLE_NOSPACE=Honey_Soldier
export APPLICATION_ID="com.ioribranford.honeysoldier"
export ICON="@mipmap/ic_launcher"
export ICONS_DIR="$PWD/android/app/src/main/res"
export KEYSTORE_FILE="$PWD/release.keystore"
export VERSION_NAME="0.3-android15"
export VERSION_CODE=15
export PACKAGE_TYPES="assemble bundle"
export APP_TYPES="embed"
export RECORD_TYPES="noRecord"
export BUILD_TYPES="release"
export ANDROID_SDK_VERSION=36
export ANDROID_NDK_VERSION=27.3.13750724
