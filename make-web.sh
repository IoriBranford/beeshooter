#!/bin/sh

. ./make-vars.sh

GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
WEB_DIR=public

./make-game.sh

LoveJsVersion="1a6e4c7553b264a8205d63e8b598b8e6798265cb"
LoveJsZip="${LoveJsVersion}.zip"
LoveJsUrl="https://github.com/2dengine/love.js/archive/${LoveJsZip}"

if [ ! -e $LoveJsZip ]
then
    curl -Lk -o $LoveJsZip $LoveJsUrl
fi

if [ ! -e love.js-$LoveJsVersion ]
then
    unzip $LoveJsZip -d .
fi

rm -rf $WEB_DIR
mkdir -p $WEB_DIR/$LOVE_VERSION

cp -r love.js-$LoveJsVersion/$LOVE_VERSION/release $WEB_DIR/$LOVE_VERSION/release
cp love.js-$LoveJsVersion/*.js love.js-$LoveJsVersion/*.css love.js-$LoveJsVersion/fetch.lua $WEB_DIR
cp love-js/index.html $WEB_DIR/index.html
cp $GAME_ASSET $WEB_DIR/nogame.love