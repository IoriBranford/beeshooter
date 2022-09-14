param(
    $Project=(Split-Path (Get-Location) -Leaf),
    $ProjectTitle=$Project,
    $GameType="game",
    $GameAsset="${GameType}.love",
    $WebDir="public"
)

./make-game.ps1 -GameType=$GameType -GameAsset=$GameAsset

npm install love.js
npx love.js.cmd $GameAsset $WebDir -t $ProjectTitle -c