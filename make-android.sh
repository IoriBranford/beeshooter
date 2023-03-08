#!/bin/sh
set -e

. ./make-vars.sh
. ./make-vars-android.sh

# see https://github.com/love2d/love-android/wiki/Game-Packaging

cp -r android/* love-android

# package the apk with your own LÖVE game
GAME_ASSET_PATH=love-android/app/src/embed/assets
if [ -f game-files.txt ]
then
	mkdir -p $GAME_ASSET_PATH
	cp -r $(cat game-files.txt) $GAME_ASSET_PATH
fi

PROJECT=${PROJECT:=${PWD##*/}}
PROJECT_TITLE="${PROJECT_TITLE:=${PROJECT}${GAME_TYPE}}"
PROJECT_TITLE_NOSPACE=${PROJECT_TITLE_NOSPACE:="$(echo ${PROJECT_TITLE} | sed -e 's/\s\+/_/g')"}
APPLICATION_ID=${APPLICATION_ID:=org.unknown.${PROJECT_TITLE_NOSPACE}}
SCREEN_ORIENTATION=${SCREEN_ORIENTATION:=landscape}
ANDROID_VERSIONCODE=${ANDROID_VERSIONCODE:=1}

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
set_gradle_property $BUILD_GRADLE versionCode $ANDROID_VERSIONCODE
if [ ! -z "$ANDROID_VERSIONNAME" ]
then
	set_gradle_property $BUILD_GRADLE versionName "'$ANDROID_VERSIONNAME'"
fi

ANDROID_MANIFEST=app/src/main/AndroidManifest.xml
git checkout $ANDROID_MANIFEST

# change the title
xmlstarlet ed -L \
	-u "/manifest/@package" 							-v "$APPLICATION_ID.executable" 	\
	-u "/manifest/application/@android:label" 			-v "$PROJECT_TITLE" 				\
	-u "/manifest/application/activity/@android:label" 	-v "$PROJECT_TITLE" 				\
	$ANDROID_MANIFEST

# override the activity if you have special needs
if [ ! -z "$ANDROID_ACTIVITY" ]
then
	xmlstarlet ed -L \
		-u "/manifest/application/activity/@android:name" 	-v "$ANDROID_ACTIVITY" 	\
		$ANDROID_MANIFEST
fi

# change the icon
if [ ! -z "$ANDROID_ICON" ]
then
	xmlstarlet ed -L \
		-u "/manifest/application/@android:icon" -v "$ANDROID_ICON" \
		$ANDROID_MANIFEST
fi
if [ ! -z "$ANDROID_ICON_ROUND" ]
then
	xmlstarlet ed -L \
		-i "/manifest/application" \
			-type attr -n "android:roundIcon" -v "$ANDROID_ICON_ROUND" \
		$ANDROID_MANIFEST
fi

./gradlew assembleEmbedNoRecordRelease bundleEmbedNoRecordRelease

cd ..

LOVE_APK=$(find love-android/app/build/outputs/apk -name "*.apk")
GAME_APK=${GAME_APK:="${PROJECT_TITLE_NOSPACE}.apk"}
LOVE_AAB=$(find love-android/app/build/outputs/bundle -name "*.aab")
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
