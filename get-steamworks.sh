#!/bin/sh

ZIP=steamworks_sdk_165.zip
URL=https://partner.steamgames.com/downloads/$ZIP
DIR=sdk/redistributable_bin

if [ ! -f $ZIP ]
then
    curl -Lk -o $ZIP $URL
fi

if [ ! -d $DIR ]
then
    unzip $ZIP -d .
fi

case $1 in
	osx)
        DLL=dylib
		;;
    linux*)
        DLL=so
		;;
	*)
		DLL=dll
        ;;
esac

ls $DIR/$1/*.$DLL