param(
    $GameType="game",
    $GameAsset="${GameType}.love",
    $WebDir="public"
)

./make-game.ps1 -GameType=$GameType -GameAsset=$GameAsset

$LoveJsVersion="0d78d942635570899ab81ffa9f00e70433a177af"
$LoveJsZip="${LoveJsVersion}.zip"
$LoveJsUrl="https://github.com/2dengine/love.js/archive/${LoveJsZip}"
$LoveVersion="11.5"

if (-not (Test-Path $LoveJsZip)) {
    curl -Lk -o $LoveJsZip $LoveJsUrl
}

if (-not (Test-Path love.js-$LoveJsVersion)) {
    Expand-Archive $LoveJsZip .
}

if (Test-Path $WebDir) {
    Remove-Item -Force -Recurse $WebDir
}

mkdir $WebDir\play
Copy-Item -Recurse love.js-$LoveJsVersion\$LoveVersion\release $WebDir\play\$LoveVersion\release
Copy-Item love.js-$LoveJsVersion\* $WebDir\play -Include *.js,*.css
Copy-Item love.js-$LoveJsVersion\index.html $WebDir\index.html 
Copy-Item $GameAsset $WebDir\play\nogame.love
