#!/bin/sh
set -e

LOVE_ANDROID_COMMIT="c0a738d26e0108eeb7026daa07285faf1db35649" # 11.x-sdk36
LOVE_ANDROID_URL="https://github.com/IoriBranford/love-android.git"

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
