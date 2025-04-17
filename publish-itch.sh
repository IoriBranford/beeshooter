#!/bin/sh

. ./make-vars.sh

# Set to your itch username
ORG=ioribranford

VERSION=$1
if [ ! ${VERSION} ]
then
	echo "Usage: publish-itch.sh <VERSION>"
	echo "(after downloading artifacts via download-artifacts.sh)"
	exit 1
fi

MASTER=$(git branch --all --contains ${VERSION} | grep -c master)
if [ $MASTER != "0" ]
then
	echo "ERROR: $VERSION is on the master branch. It very likely contains WIP content."
	exit 1
fi

PROJECT=${PROJECT:=${PWD##*/}}
BUTLER=${BUTLER:=butler}

publish() {
	CHANNEL=$1
	FILE=${PROJECT}-${VERSION}-${CHANNEL}.zip
	if [ -e ${FILE} ]
	then $BUTLER push --userversion ${VERSION} ${FILE} ${ORG}/${PROJECT}:${CHANNEL}
	fi
}

# publish win-32
publish win-64
# publish osx
# publish android
# publish linux-x86_64
# publish linux-i686
# publish linux-armhf
publish data
publish web
publish genesis
# publish demo-win-32
# publish demo-win-64
# publish demo-osx
# publish demo-android
# publish demo-linux-x86_64
# publish demo-linux-i686
# publish demo-linux-armhf
# publish demo-data

. ./make-vars-android.sh

ANDROID_FILE=${PROJECT}-${VERSION}-android.zip
if [ -e ${FILE} ]
then
	ANDROID_APK=${GAME_TITLE_NOSPACE}.apk
	unzip $ANDROID_FILE $ANDROID_APK
	$BUTLER push --userversion ${VERSION} ${ANDROID_APK} ${ORG}/${PROJECT}:android
fi