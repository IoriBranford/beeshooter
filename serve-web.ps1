param(
    $WebDir="public"
)

npx ws --directory $WebDir --https --cors.opener-policy same-origin --cors.embedder-policy require-corp