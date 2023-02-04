#!/bin/sh
set -e

. ./make-vars.sh

PROJECT=${PROJECT:=${PWD##*/}}
PROJECT_TITLE=${PROJECT_TITLE:=${PROJECT}${GAME_TYPE}}
GAME_DIR=${GAME_DIR:="${PROJECT_TITLE}"}
GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
GAME_EXE=game-win/${PROJECT_TITLE}.exe
#PROJECT_ZIP=${PROJECT}-win${ARCH_BITS}.zip

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
	wget -N ${URL}
	unzip -o ${ZIP} -d .
}

./make-game.sh
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
	wget -N ${RCEDIT_URL}
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

if [ ${ARCH_BITS} = 64 ]
then
	STEAM_DLL=steam_api64.dll
else
	STEAM_DLL=steam_api.dll
fi
LUASTEAM_DLL=https://github.com/uspgamedev/luasteam/releases/download/v1.2.0/win${ARCH_BITS}_luasteam.dll

if [ -e $STEAM_DLL ]
then
	curl -Lk -o game-win/luasteam.dll $LUASTEAM_DLL
	cp $STEAM_DLL game-win
fi

if [ -e steam_appid.txt ]
then
	cp steam_appid.txt game-win
fi

if [ -e README.md ]
then
	cp README.md game-win
fi

mv game-win "${GAME_DIR}"
