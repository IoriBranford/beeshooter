#!/bin/sh
set -e

LOVE_ANDROID_COMMIT="8e61af76693185579a82acc3b53b8a4fa66f3209"
LOVE_ANDROID_URL="https://github.com/love2d/love-android.git"
LOVE_ANDROID_NATIVE_SRC_PATH="love-android/love/src/jni"
LIBGME_PATH="${LOVE_ANDROID_NATIVE_SRC_PATH}/game-music-emu"
LIBGME_COMMIT="e76bdc0"
LIBGME_URL="https://bitbucket.org/mpyne/game-music-emu.git"

if [ ! -d love-android ]
then
	git clone --recursive $LOVE_ANDROID_URL love-android
fi

if ! expr match `git -C love-android rev-parse HEAD` $LOVE_ANDROID_COMMIT
then
	git -C love-android checkout .
	git -C love-android clean -fdx
	git -C love-android fetch
	git -C love-android checkout $LOVE_ANDROID_COMMIT
fi
git -C love-android submodule update --init --recursive

if [ ! -d $LIBGME_PATH ]
then
	git clone $LIBGME_URL $LIBGME_PATH
fi

if ! expr match `git -C $LIBGME_PATH rev-parse --short HEAD` $LIBGME_COMMIT
then
	git -C $LIBGME_PATH checkout .
	git -C $LIBGME_PATH clean -fdx
	git -C $LIBGME_PATH fetch
	git -C $LIBGME_PATH checkout $LIBGME_COMMIT
	cp -r love-apk/* love-android
fi

PROJECT=${PROJECT:=${PWD##*/}}
PROJECT_TITLE=${PROJECT_TITLE:=${PROJECT}${GAME_TYPE}}
PROJECT_TITLE_NOSPACE=${PROJECT_TITLE_NOSPACE:="$(echo ${PROJECT_TITLE} | sed -e 's/\s\+/_/g')"}
APPLICATION_ID=${APPLICATION_ID:=org.unknown.${PROJECT_TITLE_NOSPACE}}
APPLICATION_JAVA_SRC_PATH=love-android/love/src/main/java/$(echo ${APPLICATION_ID} | sed 's/\./\//g')

mkdir -p ${APPLICATION_JAVA_SRC_PATH}
echo "package ${APPLICATION_ID};" > ${APPLICATION_JAVA_SRC_PATH}/GameActivity.java
cat GameActivity.java.in >> ${APPLICATION_JAVA_SRC_PATH}/GameActivity.java
