#!/bin/sh
set -e

. ./make-vars.sh

VERSION=$1

if [[ $# -le 0 ]]
then
    echo "Need version"
fi

if [[ $# -le 1 ]]
then
    echo "Need one or more platforms: windows, linux, game"
fi

if [[ $# -lt 2 ]]
then
    exit 1
fi

declare -A PLATFORM_CONTENTS
declare -A PLATFORM_FULL
PLATFORM_CONTENTS["linux"]="$GAME_TITLE_NOSPACE-x86_64"
PLATFORM_FULL["linux"]="linux-x86_64"
PLATFORM_CONTENTS["linux-appimage"]="$GAME_TITLE_NOSPACE-x86_64.AppImage"
PLATFORM_FULL["linux-appimage"]="linux-x86_64-appimage"
PLATFORM_CONTENTS["windows"]="$GAME_TITLE"
PLATFORM_FULL["windows"]="win-64"
# PLATFORM_CONTENTS["game"]="${GAME_ASSET:="$PROJECT.love"} $CCDATA"
PLATFORM_FULL["game"]="data"

for PLATFORM in ${*:2}
do
    # echo $PLATFORM
    if [ -e make-${PLATFORM}.sh ]
    then
        ./make-${PLATFORM}.sh
    fi
    
    FULL_PLATFORM=${PLATFORM_FULL[$PLATFORM]}
    CONTENTS=${PLATFORM_CONTENTS[$PLATFORM]}
    if [ ! -z "$STEAM" ]
    then
        FULL_PLATFORM="$FULL_PLATFORM-steam"
        CONTENTS="$CONTENTS-steam"
    fi

    ZIP="$PROJECT-$VERSION"
    if [ ! -z "$GAME_TYPE" ]
    then
        ZIP="$ZIP-$GAME_TYPE"
    fi
    ZIP="$ZIP-$FULL_PLATFORM.zip"
    rm -f $ZIP
    if [[ $PLATFORM == "game" ]]
    then
	    GAME_ZIP=${GAME_ZIP:="$GAME_ASSET.zip"}
        mv $GAME_ZIP $ZIP
    else

        if [[ -e "$CONTENTS" ]]
        then
            zip -r "$ZIP" "$CONTENTS"
        fi
    fi
done
