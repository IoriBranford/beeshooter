param(
    $GameType="game",
    $GameAsset="${GameType}.love",
    $WebDir="public"
)

./make-game.ps1 -GameType=$GameType -GameAsset=$GameAsset

npm install love.js
npx love.js.cmd $GameAsset $WebDir -t " "
Compress-Archive -Path "$WebDir\*" -DestinationPath "$WebDir.zip" -Force