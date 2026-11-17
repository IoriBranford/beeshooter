#!/bin/sh

ACCOUNT="iori_branford@hotmail.com"

# VERSION=$1
# if [ ! ${VERSION} ]
# then
# 	echo "Usage: publish-steam.sh <VERSION>"
# 	echo "(after downloading artifacts via download-artifacts.sh)"
# 	exit 1
# fi

MASTER=$(git branch --all --contains ${VERSION} | grep -c master)
if [ $MASTER != "0" ]
then
	echo "ERROR: $VERSION is on the master branch. It very likely contains WIP content."
	exit 1
fi

PROJECT=${PROJECT:=${PWD##*/}}
STEAMCMD=${STEAMCMD:=steamcmd}

extract() {
	CHANNEL=$1
	FILE=${PROJECT}-${VERSION}-${CHANNEL}.zip
	if [ -e ${FILE} ]
	then
		unzip -o $FILE
	fi
}

# extract win-64
# extract linux-x86_64
# extract demo-win-64
# extract demo-linux-x86_64
#pending signing+notarization
#extract osx
#extract demo-osx

$STEAMCMD $* +login "$ACCOUNT" \
	+run_app_build "$PWD/steam/app_build_full.vdf" \
	+quit
