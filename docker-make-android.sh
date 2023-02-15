#!/bin/sh

. ./make-vars.sh

docker run -i -t --rm \
	-v $(pwd):$(pwd) -w $(pwd) --user $(id -u):$(id -g) \
	-e KEYSTORE_ALIAS -e KEYSTORE_PASSWORD \
	-e GRADLE_USER_HOME="$(pwd)/.gradle" \
	ioribranford/build-love-android:$LOVE_VERSION \
	./make-android.sh
