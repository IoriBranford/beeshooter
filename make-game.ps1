param(
$GameType="game",
$GameAsset="${GameType}.love"
)

git describe --tags --always > version
Compress-Archive -Path conf.lua,main.lua,libraries,code,shaders,version,data -DestinationPath $GameAsset -Force