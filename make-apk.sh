#!/bin/sh
set -e

LOVE_ANDROID_COMMIT="5862a884bd6866a989ed56ce431a0134e21c86e7"
LOVE_ANDROID_URL="https://github.com/love2d/love-android.git"
LOVE_ANDROID_NATIVE_SRC_PATH="love-apk-src/love/src/jni"
LIBGME_PATH="${LOVE_ANDROID_NATIVE_SRC_PATH}/game-music-emu"
LIBGME_COMMIT="e76bdc0"
LIBGME_URL="https://bitbucket.org/mpyne/game-music-emu.git"

if [ ! -d love-apk-src ]
then
	git clone --recursive $LOVE_ANDROID_URL love-apk-src
fi

if ! expr match `git -C love-apk-src rev-parse HEAD` $LOVE_ANDROID_COMMIT
then
	git -C love-apk-src checkout .
	git -C love-apk-src clean -fdx
	git -C love-apk-src fetch
	git -C love-apk-src checkout $LOVE_ANDROID_COMMIT
fi
git -C love-apk-src submodule update --init --recursive

# If ndkVersion specified, tries to install it.
# But in ci we want to use the installed.
NDK_VERSION=`grep -o '[\.[:digit:]]\+$'  "$ANDROID_NDK_HOME/source.properties"`
CORRECT_NDK_HOME="$ANDROID_HOME/ndk/$NDK_VERSION"
sed -i -r -e "s/ndkVersion.*$/ndkVersion '$NDK_VERSION'/" love-apk-src/app/build.gradle
sed -i -r -e "s/ndkVersion.*$/ndkVersion '$NDK_VERSION'/" love-apk-src/love/build.gradle
if [ ! -d $ANDROID_HOME/ndk ]
then
	mkdir -p $ANDROID_HOME/ndk
fi
if [ "$ANDROID_NDK_HOME" != "$CORRECT_NDK_HOME" ] && [ ! -e "$CORRECT_NDK_HOME" ]
then
	ln -s "$ANDROID_NDK_HOME" "$CORRECT_NDK_HOME"
fi

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
	cp -r love-apk/* love-apk-src
fi

PROJECT=${PROJECT:=${PWD##*/}}
PROJECT_TITLE=${PROJECT_TITLE:=${PROJECT}${GAME_TYPE}}
PROJECT_TITLE_NOSPACE=${PROJECT_TITLE_NOSPACE:="$(echo ${PROJECT_TITLE} | sed -e 's/\s\+/_/g')"}
APPLICATION_ID=${APPLICATION_ID:=org.unknown.${PROJECT_TITLE_NOSPACE}}
APPLICATION_JAVA_SRC_PATH=love-apk-src/love/src/main/java/$(echo ${APPLICATION_ID} | sed 's/\./\//g')

mkdir -p ${APPLICATION_JAVA_SRC_PATH}
echo "package ${APPLICATION_ID};" > ${APPLICATION_JAVA_SRC_PATH}/GameActivity.java
cat GameActivity.java.in >> ${APPLICATION_JAVA_SRC_PATH}/GameActivity.java

cd love-apk-src
./gradlew assembleEmbedRelease

# output: love-apk-src/app/build/outputs/apk/embed/release/app-embed-release-unsigned.apk
