#!/bin/sh

. ./make-vars-genesis.sh

MAKE=${MAKE:=make}

cd genesis

${MAKE} -f $GDK/makefile.gen clean
${MAKE} -f $GDK/makefile.gen release
cp out/rom.bin "../${ROM_FILE}"

cd ..
