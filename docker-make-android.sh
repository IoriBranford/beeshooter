#!/bin/sh

. ./make-vars.sh

docker run -i -t --rm \
	-v $(pwd):/prj -w /prj \
	-e GITHUB_WORKSPACE="/prj" \
	-e KEYSTORE_ALIAS -e KEYSTORE_PASSWORD \
	-e ENV_SCRIPT="make-vars-android.sh" \
	ioribranford/build-love-android:$LOVE_VERSION-ghaction
