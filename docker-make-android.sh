#!/bin/sh

. ./make-vars.sh

docker run --rm \
	-v $(pwd):$(pwd) -w $(pwd) \
	-v ./outputs:/love-android/app/build/outputs \
	-e KEYSTORE_ALIAS -e KEYSTORE_PASSWORD \
	ioribranford/build-love-android:$LOVE_VERSION-full \
	sh -c '. ./make-vars-android.sh && cd /love-android && ./build.sh'
