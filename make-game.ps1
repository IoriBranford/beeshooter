param(
$GameType="game",
$GameAsset="${GameType}.love",
$GamePath="game"
)

git describe --tags --always > version
Set-Location $GamePath
Compress-Archive -Path conf.lua,main.lua,libraries,code,shaders,version,data -DestinationPath "..\$GameAsset" -Force
Set-Location ..