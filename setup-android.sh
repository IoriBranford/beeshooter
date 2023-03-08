#!/bin/sh
set -e

LOVE_ANDROID_COMMIT="8e61af76693185579a82acc3b53b8a4fa66f3209"
LOVE_ANDROID_URL="https://github.com/love2d/love-android.git"

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
