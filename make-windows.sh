#!/bin/sh
set -e

. ./make-vars.sh

OUT_DIR=${OUT_DIR:="${GAME_TITLE}"}
GAME_EXE=game-win/${GAME_TITLE}.exe
#PROJECT_ZIP=${PROJECT}-win${ARCH_BITS}.zip
GAME_RUN=${GAME_RUN:="$GAME_TITLE.bat"}
ARCH_BITS=${ARCH_BITS:=64}
if [ ${ARCH_BITS} = 64 ]
then
	ARCH=x64
else
	ARCH=x86
fi

LOVE_VERSION=${LOVE_VERSION:="11.4"}
LOVE_DIR=love-${LOVE_VERSION}-win${ARCH_BITS}
LOVE_ZIP=${LOVE_DIR}.zip
LOVE_EXE=$LOVE_DIR/love.exe
LOVE_URL=https://github.com/love2d/love/releases/download/${LOVE_VERSION}/${LOVE_ZIP}

GME_VERSION=0.6.3
GME_MSVC=msvc14
GME_ZIP=libgme_${GME_VERSION}_${GME_MSVC}.zip
GME_URL=https://github.com/ShiftMediaProject/game-music-emu/releases/download/${GME_VERSION}/${GME_ZIP}

RCEDIT=rcedit-x64.exe
RCEDIT_URL=https://github.com/electron/rcedit/releases/download/v1.1.1/${RCEDIT}

getZip () {
	ZIP=$1
	URL=$2
	curl -LkO ${URL}
	unzip -o ${ZIP} -d .
}

rm -rf game-win
mkdir -p game-win

if ! [ -d ${LOVE_DIR} ]
then
	getZip ${LOVE_ZIP} ${LOVE_URL}
fi

ICO="appicon/appicon.ico"
if ! [ -f "$ICO" ]
then
	ICO="${LOVE_DIR}/game.ico"
fi
if ! [ -f ${RCEDIT} ]
then
	curl -LkO ${RCEDIT_URL}
fi
case $(uname | tr '[:upper:]' '[:lower:]') in
	windows*|mingw*|msys*|cygwin*)
		;;
	*)
		WINE="wine"
		;;
esac
${WINE} ./${RCEDIT} ${LOVE_EXE} --set-icon "$ICO"

cat ${LOVE_EXE} ${GAME_ASSET} > $GAME_EXE

if [ ! -z "$CCDATA" ] && [ -d $CCDATA ]
then
	cp -r "$CCDATA" game-win
fi

cp ${LOVE_DIR}/*.dll game-win

if [ -e gme.dll ]
then
	if [ ${ARCH_BITS} = 64 ]
	then
		# custom build with MAME YM2612
		cp gme.dll game-win
	else
		if ! [ -e bin/${ARCH}/gme.dll ]
		then
			getZip ${GME_ZIP} ${GME_URL}
		fi
		cp bin/${ARCH}/gme.dll game-win
	fi
fi

if [ ! -z "$STEAM" ]
then
	if [ ${ARCH_BITS} = 64 ]
	then
		STEAM_DLL=$(./get-steamworks.sh win64)
	else
		STEAM_DLL=$(./get-steamworks.sh)
	fi
	LUASTEAM_DLL=https://github.com/uspgamedev/luasteam/releases/download/v6.0.0/win${ARCH_BITS}_luasteam.dll
	OUT_DIR="$OUT_DIR-steam"
	if [ ! -f luasteam.dll ]
	then
		curl -Lk -o luasteam.dll $LUASTEAM_DLL
	fi
	cp $STEAM_DLL luasteam.dll steam_appid.txt game-win
fi

if [ -e README.md ]
then
	cp README.md game-win
fi
rm -rf "$OUT_DIR"
mv game-win "${OUT_DIR}"
