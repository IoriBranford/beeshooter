#!/bin/bash

. ./make-vars-genesis.sh

MAKE=${MAKE:=make}
ROM_HEADER=src/boot/rom_head.c
ROM_HEADER_TITLE=$(printf '%-48s' "${GAME_TITLE^^}")

cd genesis

${MAKE} -f $GDK/makefile.gen clean

rm $ROM_HEADER
${MAKE} -f $GDK/makefile.gen release
sed -i -r -e "s#\(C\)SGDK 2024    #${COPYRIGHT}#" $ROM_HEADER
sed -i -r -e "s#SAMPLE PROGRAM                                  #${ROM_HEADER_TITLE}#" $ROM_HEADER

${MAKE} -f $GDK/makefile.gen release
cp out/rom.bin "../${ROM_FILE}"

cd ..
