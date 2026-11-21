#!/bin/sh
set -e

. ./make-vars.sh

GAME_EXE=${GAME_EXE:=$PROJECT}
GAME_RUN=${GAME_RUN:="$PROJECT.sh"}
DESCRIPTION=${DESCRIPTION:="No description"}

LOVE_VERSION=${LOVE_VERSION:="11.4"}
LOVE_EXE=bin/love
if [ "$LOVE_VERSION" = "11.3" ]
then
	LOVE_EXE=usr/bin/love
fi

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
LOVE_APPDIR=love-${LOVE_VERSION}-${ARCH}.AppDir

APPIMAGETOOL=appimagetool-${ARCH}.AppImage
APPIMAGETOOL_RELEASE=continuous
APPIMAGETOOL_URL=https://github.com/AppImage/AppImageKit/releases/download/${APPIMAGETOOL_RELEASE}

GAME_APPDIR=${GAME_TITLE_NOSPACE}.AppDir
GAME_DESKTOPFILE=${GAME_TITLE_NOSPACE}.desktop
OUT_DIR=${OUT_DIR:="${GAME_TITLE_NOSPACE}-${ARCH}"}
GAME_APPIMAGE=${GAME_APPIMAGE:="${GAME_TITLE_NOSPACE}-${ARCH}.AppImage"}

LIBGME_VERSION=0.6.3-2
LIBGME_DEB=libgme0_${LIBGME_VERSION}_${DEB_ARCH}.deb
LIBGME_DEV_DEB=libgme-dev_${LIBGME_VERSION}_${DEB_ARCH}.deb
LIBGME_URL=http://ftp.debian.org/debian/pool/main/g/game-music-emu

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

if [ ! -d "love.AppDir" ]
then
	download ${LOVE_APPIMAGE_URL} ${LOVE_APPIMAGE}
	chmod a+x ${LOVE_APPIMAGE}
	./${LOVE_APPIMAGE} --appimage-extract
	mv squashfs-root love.AppDir
fi

rm -rf ${GAME_APPDIR}
cp -r love.AppDir ${GAME_APPDIR}

GAME_ASSET_PATH=$(pwd)/$GAME_ASSET
pushd $GAME_APPDIR
cat bin/love $GAME_ASSET_PATH > bin/$GAME_EXE
chmod +x bin/$GAME_EXE
rm bin/love
sed -i -r -e "s/^export LUA_PATH=\"/&\$APPDIR\/share\/luajit-2.1\/?.lua;/" AppRun
sed -i -r -e "s/bin\/love/bin\/$GAME_EXE/" AppRun
popd

if [ ! -z "$STEAM" ] 
then
	OUT_DIR="$OUT_DIR-steam"
	STEAM_DLL=$(./get-steamworks.sh linux$ARCH_BITS)
	LUASTEAM_DLL=https://github.com/uspgamedev/luasteam/releases/download/v6.0.0/linux${ARCH_BITS}_luasteam.so

	cp $STEAM_DLL $GAME_APPDIR/lib

	if [ ! -f luasteam.so ]
	then
		curl -Lk -o luasteam.so $LUASTEAM_DLL
	fi
	mkdir -p $GAME_APPDIR/lib/lua/5.1
	cp luasteam.so $GAME_APPDIR/lib/lua/5.1
fi

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
cd ..

rm -rf $OUT_DIR
mkdir -p $OUT_DIR/share

cp -r $GAME_APPDIR/bin $GAME_APPDIR/lib $OUT_DIR
cp -r $GAME_APPDIR/share/luajit-2.1 $OUT_DIR/share
cp $GAME_APPDIR/AppRun $OUT_DIR/$GAME_RUN

rm -rf $OUT_DIR.AppImage
mkdir -p $OUT_DIR.AppImage

if [ ! -z "$CCDATA" ] && [ -d $CCDATA ]
then
	cp -r $CCDATA $OUT_DIR/bin
	cp -r $CCDATA $OUT_DIR.AppImage
	cp $GAME_ASSET $OUT_DIR.AppImage/game
	cp $LOVE_APPIMAGE $OUT_DIR.AppImage/love
	cp run.sh "$OUT_DIR.AppImage/$GAME_RUN"
	sed -i -r -e "s/^love/\.\/love/" "$OUT_DIR.AppImage/$GAME_RUN"
else
	appimagetool/AppRun ${GAME_APPDIR} $OUT_DIR.AppImage/${GAME_APPIMAGE}
fi

if [ ! -z "$STEAM" ] && [ -e steam_appid.txt ]
then
	cp steam_appid.txt $OUT_DIR
	cp steam_appid.txt $OUT_DIR.AppImage
fi
