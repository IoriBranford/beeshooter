param(
    $WebDir="public"
)

npm install local-web-server
npx ws --directory $WebDir --cors.opener-policy same-origin --cors.embedder-policy require-corp