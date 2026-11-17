#!/bin/sh

. ./make-vars.sh

GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
WEB_DIR=public

LoveJsVersion="87c5645cfb7b70a0b58e9ab0d656e0fb4c0960d7"
LoveJsZip="${LoveJsVersion}.zip"
LoveJsUrl="https://github.com/2dengine/love.js/archive/${LoveJsZip}"

if [ ! -f $LoveJsZip ]
then
    curl -Lk -o $LoveJsZip $LoveJsUrl
fi

if [ ! -d love.js ]
then
    unzip $LoveJsZip -d .
    mv love.js-$LoveJsVersion love.js
fi

rm -rf $WEB_DIR
mkdir -p $WEB_DIR
cp -r love.js/* $WEB_DIR
cp $GAME_ASSET $WEB_DIR/nogame.love

sed -i -E \
    -e "/<base href/d" \
    -e "s/\"player.js\"/'player.js?g=nogame.love\&arg=[]'/" \
    $WEB_DIR/index.html