#!/bin/sh

export PROJECT=honey-guardian
export GAME_TITLE="Honey Soldier"
export GAME_TITLE_NOSPACE="Honey_Soldier"
export DESCRIPTION="Caravan shooting"
export COPYRIGHT="© 2022-2026 IoriBranford"
export LOVE_VERSION="11.5"
export GAME_DIR="$PWD/game"

export GAME_TYPE=${GAME_TYPE:=""}
declare -A GAME_TYPE_TITLE
GAME_TYPE_TITLE["demo"]="$GAME_TITLE Demo"

if [[ -z "$GAME_TYPE" ]]
then
    export GAME_ASSET="$PROJECT.love"
else
    export GAME_ASSET="$PROJECT-$GAME_TYPE.love"
    export GAME_TITLE=${GAME_TYPE_TITLE[$GAME_TYPE]}
fi

export GAME_TITLE_NOSPACE=$(echo ${GAME_TITLE} | sed -e 's/\s\+/_/g')
