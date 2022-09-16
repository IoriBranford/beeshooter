param(
    $WebDir="public"
)

npx ws --directory $WebDir --cors.opener-policy same-origin --cors.embedder-policy require-corp