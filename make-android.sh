#!/bin/sh
set -e

. ./make-vars.sh

# see https://github.com/love2d/love-android/wiki/Game-Packaging

./setup-android.sh

# Create a folder named assets in app/src/embed of the root of the love-android repository
# and place your game in it
GAME_ASSET_PATH=love-apk-src/app/src/embed/assets
if [ -f game-files.txt ]
then
	mkdir -p $GAME_ASSET_PATH
	cp -r $(cat game-files.txt) $GAME_ASSET_PATH
fi

cp -r appicon/android/* love-apk-src/app/src/main/res

ANDROID_MANIFEST=love-apk-src/app/src/main/AndroidManifest.xml
BUILD_GRADLE=love-apk-src/app/build.gradle

PROJECT=${PROJECT:=${PWD##*/}}
PROJECT_TITLE="${PROJECT_TITLE:=${PROJECT}${GAME_TYPE}}"
PROJECT_TITLE_NOSPACE=${PROJECT_TITLE_NOSPACE:="$(echo ${PROJECT_TITLE} | sed -e 's/\s\+/_/g')"}
APPLICATION_ID=${APPLICATION_ID:=org.unknown.${PROJECT_TITLE_NOSPACE}}
SCREEN_ORIENTATION=${SCREEN_ORIENTATION:=landscape}

set_gradle_property() {
	FILE="$1"
	KEY="$2"
	VALUE="$3"
	sed -i -r -e "s#${KEY} .+#${KEY} ${VALUE}#" ${FILE}
}

set_manifest_property() {
	FILE="$1"
	KEY="$2"
	VALUE="$3"
	sed -i -r -e "s#${KEY}=\".*\"#${KEY}=\"${VALUE}\"#" ${FILE}
}

replace() {
	FILE="$1"
	OLD="$2"
	NEW="$3"
	sed -i -r -e "s#${OLD}#${NEW}#" ${FILE}
}

set_gradle_property $BUILD_GRADLE applicationId "'$APPLICATION_ID'"
set_gradle_property $BUILD_GRADLE versionName "'`git describe --tags --always`'"
set_gradle_property $BUILD_GRADLE versionCode 1
set_manifest_property $ANDROID_MANIFEST "package" "$APPLICATION_ID.executable"
set_manifest_property $ANDROID_MANIFEST "android:label" "$PROJECT_TITLE"

# device may not honor this anymore
# set_manifest_property $ANDROID_MANIFEST "android:screenOrientation" "$SCREEN_ORIENTATION"

replace $ANDROID_MANIFEST "android:name=\".+GameActivity\"" "android:name=\"$APPLICATION_ID.GameActivity\""

cd love-apk-src
./gradlew assembleEmbedNoRecordRelease bundleEmbedNoRecordRelease
cd ..

LOVE_APK=$(find love-apk-src/app/build/outputs/apk -name "*.apk")
GAME_APK=${GAME_APK:="${PROJECT_TITLE_NOSPACE}.apk"}
LOVE_AAB=$(find love-apk-src/app/build/outputs/bundle -name "*.aab")
GAME_AAB=${GAME_AAB:="${PROJECT_TITLE_NOSPACE}.aab"}

if [ ! -z "$KEYSTORE_ALIAS" ] && [ ! -z "$KEYSTORE_PASSWORD" ]
then
	apksigner sign --ks release.keystore \
		--ks-key-alias $KEYSTORE_ALIAS \
		--ks-pass env:KEYSTORE_PASSWORD --key-pass env:KEYSTORE_PASSWORD \
		--out $GAME_APK $LOVE_APK
	jarsigner -verbose -keystore release.keystore \
		-storepass $KEYSTORE_PASSWORD \
		-signedjar $GAME_AAB $LOVE_AAB $KEYSTORE_ALIAS
else
	cp $LOVE_APK "${PROJECT_TITLE_NOSPACE}-unsigned.apk"
	cp $LOVE_AAB "${PROJECT_TITLE_NOSPACE}-unsigned.aab"
fi
