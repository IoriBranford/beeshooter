#!/bin/sh

. ./make-vars.sh

ARCH=${ARCH:="x86_64"}
if [ ${ARCH} = x86_64 ]; then
	ARCH_BITS=64
elif [ ${ARCH} = i686 ]; then
	ARCH_BITS=32
fi

STEAM_DLL="$(./get-steamworks.sh linux$ARCH_BITS)"
LUASTEAM_DLL=https://github.com/uspgamedev/luasteam/releases/download/v6.0.0/linux${ARCH_BITS}_luasteam.so

if [ ! -f luasteam.so ]
then
  curl -Lk -o luasteam.so $LUASTEAM_DLL
fi

LD_LIBRARY_PATH=$PWD:$(dirname "$STEAM_DLL") love game

