#!/bin/sh
set -e

. ./make-vars.sh

PROJECT=${PROJECT:=${PWD##*/}}
GAME_TITLE=${GAME_TITLE:="${PROJECT}${GAME_TYPE}"}
GAME_TITLE_NOSPACE=${GAME_TITLE_NOSPACE:="$(echo ${GAME_TITLE} | sed -e 's/\s\+/_/g')"}
GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:="${GAME_TYPE}.love"}
DESCRIPTION=${DESCRIPTION:="No description"}

LOVE_VERSION=${LOVE_VERSION:="11.4"}
LOVE_EXE=bin/love

ARCH=${ARCH:="x86_64"}
if [ ${ARCH} = x86_64 ]; then
	DEB_ARCH=amd64
	ARCH_BITS=64
elif [ ${ARCH} = i686 ]; then
	DEB_ARCH=i386
	ARCH_BITS=32
else
	DEB_ARCH=${ARCH}
fi
LOVE_APPIMAGE_URL=https://github.com/love2d/love/releases/download/${LOVE_VERSION}
LOVE_APPIMAGE=love-${LOVE_VERSION}-${ARCH}.AppImage

APPIMAGETOOL=appimagetool-${ARCH}.AppImage
APPIMAGETOOL_RELEASE=1.9.1
APPIMAGETOOL_URL=https://github.com/AppImage/appimagetool/releases/download/${APPIMAGETOOL_RELEASE}

GAME_APPDIR=${GAME_TITLE_NOSPACE}.AppDir
GAME_DESKTOPFILE=${GAME_TITLE_NOSPACE}.desktop
OUT_DIR=${OUT_DIR:="${GAME_TITLE_NOSPACE}-${ARCH}"}
GAME_APPIMAGE=${GAME_APPIMAGE:="${GAME_TITLE_NOSPACE}-${ARCH}.AppImage"}

LIBGME_VERSION=0.6.3-2
LIBGME_DEB=libgme0_${LIBGME_VERSION}_${DEB_ARCH}.deb
LIBGME_DEV_DEB=libgme-dev_${LIBGME_VERSION}_${DEB_ARCH}.deb
LIBGME_URL=http://ftp.debian.org/debian/pool/main/g/game-music-emu

./make-game.sh

download() {
	URL=$1
	FILE=$2
	if [ ! -f ${FILE} ]
	then
		wget -N ${URL}/${FILE}
	fi
}

if [ ! -e appimagetool ]
then
	download ${APPIMAGETOOL_URL} ${APPIMAGETOOL}
	chmod a+x ${APPIMAGETOOL}
	./${APPIMAGETOOL} --appimage-extract
	mv squashfs-root appimagetool
fi

download ${LOVE_APPIMAGE_URL} ${LOVE_APPIMAGE}
chmod a+x ${LOVE_APPIMAGE}

./${LOVE_APPIMAGE} --appimage-extract
if [ -d ${GAME_APPDIR} ]
then
	rm -rf ${GAME_APPDIR}
fi
mv squashfs-root ${GAME_APPDIR}

if [ -f gme.dll ]
then
	download ${LIBGME_URL} ${LIBGME_DEB}
	download ${LIBGME_URL} ${LIBGME_DEV_DEB}
	dpkg -x ${LIBGME_DEB} ${GAME_APPDIR}
	dpkg -x ${LIBGME_DEV_DEB} ${GAME_APPDIR}
fi

set_property() {
	FILE=$1
	KEY=$2
	VALUE=$3
	if [ -z "${VALUE}" ]
	then
		sed -i -r -e "/^${KEY}=/d" ${FILE}
	else
		sed -i -r -e "s/^${KEY}=.*/${KEY}=${VALUE}/" ${FILE}
	fi
}

if [ -f "appicon/appicon.png" ]
then
	zip $GAME_ASSET appicon/appicon.png
	cp appicon/appicon.png $GAME_APPDIR
fi
cd ${GAME_APPDIR}
set_property love.desktop Name "${GAME_TITLE}"
set_property love.desktop Comment "${DESCRIPTION}"
set_property love.desktop MimeType ""
set_property love.desktop Categories "Game;"
set_property love.desktop NoDisplay "false"
if [ -f appicon.png ]
then
	ln -sf appicon.png .DirIcon
	set_property love.desktop Icon "appicon"
fi
mv love.desktop ${GAME_TITLE_NOSPACE}.desktop
cat $LOVE_EXE ../${GAME_ASSET} > love-fused
mv love-fused $LOVE_EXE
chmod +x $LOVE_EXE
cd ..

mkdir -p $OUT_DIR
appimagetool/AppRun ${GAME_APPDIR} $OUT_DIR/${GAME_APPIMAGE}

STEAM_DLL=linux${ARCH_BITS}/libsteam_api.so
LUASTEAM_DLL=https://github.com/uspgamedev/luasteam/releases/download/v1.0.4/linux${ARCH_BITS}_luasteam.so

if [ -e $STEAM_DLL ]
then
	curl -Lk -o $OUT_DIR/luasteam.so $LUASTEAM_DLL
	cp $STEAM_DLL $OUT_DIR
fi
if [ -e steam_appid.txt ]
then
	cp steam_appid.txt $OUT_DIR
fi
