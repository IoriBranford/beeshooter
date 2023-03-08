#!/bin/sh
set -e

LOVE_ANDROID_NATIVE_SRC_PATH="love-android/love/src/jni"
LIBGME_PATH="${LOVE_ANDROID_NATIVE_SRC_PATH}/game-music-emu"
LIBGME_COMMIT="e76bdc0"
LIBGME_URL="https://bitbucket.org/mpyne/game-music-emu.git"

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
fi
