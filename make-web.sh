#!/bin/sh

. ./make-vars.sh

GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
WEB_DIR=public

./make-game.sh

LoveJsVersion="0d78d942635570899ab81ffa9f00e70433a177af"
LoveJsZip="${LoveJsVersion}.zip"
LoveJsUrl="https://github.com/2dengine/love.js/archive/${LoveJsZip}"

if [[ ! -e $LoveJsZip ]]
then
    curl -Lk -o $LoveJsZip $LoveJsUrl
fi

if [[ ! -e love.js-$LoveJsVersion ]]
then
    unzip $LoveJsZip -d .
fi

rm -rf $WEB_DIR
mkdir -p $WEB_DIR/play/$LOVE_VERSION

cp -r love.js-$LoveJsVersion/$LOVE_VERSION/release $WEB_DIR/play/$LOVE_VERSION/release
cp love.js-$LoveJsVersion/*.{js,css} $WEB_DIR/play
cp love.js-$LoveJsVersion/index.html $WEB_DIR/index.html 
cp $GAME_ASSET $WEB_DIR/play/nogame.love