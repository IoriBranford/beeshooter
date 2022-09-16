#!/bin/sh

WEB_DIR=${WEB_DIR:=public}

npm install local-web-server
npx ws --directory $WEB_DIR --cors.opener-policy same-origin --cors.embedder-policy require-corp