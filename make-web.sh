#!/bin/sh

. ./make-vars.sh

GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
WEB_DIR=public

./make-game.sh
npx love.js ${GAME_ASSET} ${WEB_DIR} -t " "