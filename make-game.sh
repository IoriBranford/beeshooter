#!/bin/sh
set -e

. ./make-vars.sh

FLIST="$GAME_TYPE.flist"
if [[ ! -f $GAME_DIR/$FLIST ]]
then
	echo Please create a file list $GAME_DIR/$FLIST
	exit 1
fi

LUA=${LUA:=luajit}

if [ -e $GAME_ASSET ]
then
	rm $GAME_ASSET
fi

OUTDIR="$PWD"

case $(uname | tr '[:upper:]' '[:lower:]') in
	windows*|mingw*|msys*|cygwin*)
		if ! [ -x "$(command -v zip)" ]; then
			ZIP_VERSION=3.0
			ZIP_BIN_ZIP=zip-$ZIP_VERSION-bin.zip
			ZIP_DEP_ZIP=zip-$ZIP_VERSION-dep.zip
			ZIP_BIN_URL=http://downloads.sourceforge.net/gnuwin32/$ZIP_BIN_ZIP
			ZIP_DEP_URL=http://downloads.sourceforge.net/gnuwin32/$ZIP_DEP_ZIP
			if ! [ -f $ZIP_BIN_ZIP ]
			then
				curl -LkO $ZIP_BIN_URL
				unzip -o $ZIP_BIN_ZIP -d zip
			fi
			if ! [ -f $ZIP_DEP_ZIP ]
			then
				curl -LkO $ZIP_DEP_URL
				unzip -o $ZIP_DEP_ZIP -d zip
			fi
			PATH="$PWD/zip/bin:$PATH"
		fi
		;;
esac

./make-version.sh

pushd "$GAME_DIR"
zip -r "$OUTDIR/$GAME_ASSET" $(cat $FLIST)
popd

if [ ! -z "$CCDATA" ] && [ -d $CCDATA ]
then
	GAME_ZIP=${GAME_ZIP:="$GAME_ASSET.zip"}

	pushd "$GAME_DIR"
	GAME_CCDATA=$(basename $CCDATA)
	zip -r "$OUTDIR/$GAME_ZIP" "$GAME_CCDATA"
	popd #$GAME_DIR
	
	zip -r "$GAME_ZIP" "$GAME_ASSET"

	sed -r -e "s/game/${GAME_ASSET}/" run.bat > /tmp/run.bat
	sed -r -e "s/game/${GAME_ASSET}/" run.sh > /tmp/run.sh
	pushd /tmp
	zip "$OUTDIR/$GAME_ZIP" run.sh run.bat
	popd
fi

if [ -f "appicon/appicon.png" ]
then
	zip $GAME_ASSET appicon/appicon.png
fi