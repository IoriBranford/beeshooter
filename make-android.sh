#!/bin/sh
set -e

. ./make-vars-android.sh

# see https://github.com/love2d/love-android/wiki/Game-Packaging

cp -r android/* love-android

# package the apk with your own LÖVE game
GAME_ASSET_PATH=love-android/app/src/embed/assets
if [ -d "$GAME_DIR" ]
then
	mkdir -p $GAME_ASSET_PATH
	cp -r "$GAME_DIR/*" $GAME_ASSET_PATH
fi

PROJECT=${PROJECT:=${PWD##*/}}
GAME_TITLE="${GAME_TITLE:=${PROJECT}${GAME_TYPE}}"
GAME_TITLE_NOSPACE=${GAME_TITLE_NOSPACE:="$(echo ${GAME_TITLE} | sed -e 's/\s\+/_/g')"}
APPLICATION_ID=${APPLICATION_ID:=org.unknown.${GAME_TITLE_NOSPACE}}
SCREEN_ORIENTATION=${SCREEN_ORIENTATION:=landscape}
VERSION_CODE=${VERSION_CODE:=1}

cd love-android

BUILD_GRADLE=app/build.gradle

set_gradle_property() {
	FILE="$1"
	KEY="$2"
	VALUE="$3"
	sed -i -r -e "s#${KEY} .+#${KEY} ${VALUE}#" ${FILE}
}

# give your package a unique name
set_gradle_property $BUILD_GRADLE applicationId "'$APPLICATION_ID'"

# change the version
set_gradle_property $BUILD_GRADLE versionCode $VERSION_CODE
if [ ! -z "$VERSION_NAME" ]
then
	set_gradle_property $BUILD_GRADLE versionName "'$VERSION_NAME'"
fi

ANDROID_MANIFEST=app/src/main/AndroidManifest.xml
git checkout $ANDROID_MANIFEST

# change the title
xmlstarlet ed -L \
	-u "/manifest/@package" 							-v "$APPLICATION_ID.executable" 	\
	-u "/manifest/application/@android:label" 			-v "$GAME_TITLE" 				\
	-u "/manifest/application/activity/@android:label" 	-v "$GAME_TITLE" 				\
	$ANDROID_MANIFEST

# override the activity if you have special needs
if [ ! -z "$ANDROID_ACTIVITY" ]
then
	xmlstarlet ed -L \
		-u "/manifest/application/activity/@android:name" 	-v "$ANDROID_ACTIVITY" 	\
		$ANDROID_MANIFEST
fi

# change the icon
if [ ! -z "$ICON" ]
then
	xmlstarlet ed -L \
		-u "/manifest/application/@android:icon" -v "$ICON" \
		$ANDROID_MANIFEST
fi
if [ ! -z "$ICON_ROUND" ]
then
	xmlstarlet ed -L \
		-i "/manifest/application" \
			-type attr -n "android:roundIcon" -v "$ICON_ROUND" \
		$ANDROID_MANIFEST
fi

./gradlew assembleEmbedNoRecordRelease bundleEmbedNoRecordRelease

cd ..

LOVE_APK=$(find love-android/app/build/outputs/apk -name "*.apk")
GAME_APK=${GAME_APK:="${GAME_TITLE_NOSPACE}.apk"}
LOVE_AAB=$(find love-android/app/build/outputs/bundle -name "*.aab")
GAME_AAB=${GAME_AAB:="${GAME_TITLE_NOSPACE}.aab"}

if [ ! -z "$KEYSTORE_FILE" ] && [ ! -z "$KEYSTORE_ALIAS" ] && [ ! -z "$KEYSTORE_PASSWORD" ]
then
	apksigner sign --ks "$KEYSTORE_FILE" \
		--ks-key-alias $KEYSTORE_ALIAS \
		--ks-pass env:KEYSTORE_PASSWORD --key-pass env:KEYSTORE_PASSWORD \
		--out $GAME_APK $LOVE_APK
	jarsigner -verbose -keystore "$KEYSTORE_FILE" \
		-storepass $KEYSTORE_PASSWORD \
		-signedjar $GAME_AAB $LOVE_AAB $KEYSTORE_ALIAS
else
	cp $LOVE_APK "${GAME_TITLE_NOSPACE}-unsigned.apk"
	cp $LOVE_AAB "${GAME_TITLE_NOSPACE}-unsigned.aab"
fi

DEBUG_SYMBOLS_PATH=love-android/app/build/intermediates/merged_native_libs/embedNoRecordRelease/out/lib/
cp -r $DEBUG_SYMBOLS_PATH/* .
zip -r native-debug-symbols.zip $(ls $DEBUG_SYMBOLS_PATH)
