#!/bin/sh

WEB_DIR=${WEB_DIR:=public}

npx ws --directory $WEB_DIR --https --cors.opener-policy same-origin --cors.embedder-policy require-corp