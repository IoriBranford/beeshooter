#!/bin/sh

. ./make-vars-android.sh

docker run --rm \
	-v $GAME_DIR:/game:ro \
	-v ./outputs:/love-android/app/build/outputs \
	-e KEYSTORE_FILE="/game/release.keystore" \
	-e KEYSTORE_ALIAS -e KEYSTORE_PASSWORD \
	-e APPLICATION_ID \
	-e GAME_TITLE \
	-e VERSION_NAME \
	-e VERSION_CODE \
	-e ICON \
	-v $ICONS_DIR:/love-android/app/src/main/res:ro \
	ioribranford/build-love-android:$LOVE_VERSION-full 
	# sh -c "./setup-android.sh && ./make-android.sh"
