#!/bin/sh
set -e

. ./make-vars.sh

PROJECT=${PROJECT:=${PWD##*/}}
GAME_TYPE=${GAME_TYPE:=dev}
GAME_TITLE=${GAME_TITLE:=${PROJECT}-${GAME_TYPE}}
OUT_DIR=${OUT_DIR:="${GAME_TITLE}"}

ARCH_BITS=${ARCH_BITS:=64}
if [ ${ARCH_BITS} = 64 ]; then
	ARCH=x64
else
	ARCH=x86
fi

LOVE_VERSION=${LOVE_VERSION:="11.3"}
LOVE_DIR=love-${LOVE_VERSION}-win${ARCH_BITS}
LOVE_ZIP=${LOVE_DIR}.zip
LOVE_URL=https://github.com/love2d/love/releases/download/${LOVE_VERSION}/${LOVE_ZIP}

GME_VERSION=0.6.2
GME_MSVC=msvc12
GME_ZIP=libgme_${GME_VERSION}_${GME_MSVC}.zip
GME_URL=https://github.com/ShiftMediaProject/game-music-emu/releases/download/${GME_VERSION}/${GME_ZIP}

getZip () {
	ZIP=$1
	URL=$2
	if [ ! -f ${ZIP} ]
	then wget -N ${URL}
	fi
	unzip -o ${ZIP} -d .
}
getZip ${LOVE_ZIP} ${LOVE_URL}
getZip ${GME_ZIP} ${GME_URL}

cp -r game ${LOVE_DIR}
find ${LOVE_DIR} -name .git | xargs rm -rf
echo lovec game > ${LOVE_DIR}/${PROJECT}.bat
mv bin/${ARCH}/gme.dll ${LOVE_DIR}

mv ${LOVE_DIR} "${OUT_DIR}"

#zip -r ${PROJECT_ZIP} "${OUT_DIR}"
