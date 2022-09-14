#!/bin/sh

PROJECT=${PROJECT:=${PWD##*/}}
PROJECT_TITLE=${PROJECT_TITLE:=${PROJECT}${GAME_TYPE}}
GAME_TYPE=${GAME_TYPE:=game}
GAME_ASSET=${GAME_ASSET:=${GAME_TYPE}.love}
WEB_DIR=public

./make-game.sh

npm install love.js
npx love.js ${GAME_ASSET} ${WEB_DIR} -t ${PROJECT_TITLE}