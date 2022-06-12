param(
$GameType="demo",
$lua="luajit",
[Parameter(mandatory=$true)]
$Dest=$args[0]
)

$lua=(Get-Item $lua)
$Dest=(Get-Item $Dest)

git describe --tags --always > "$Dest/version"

cd game

$Env:LUA_PATH="$Env:LUA_PATH;./?.lua;./levity/pl/lua/?.lua"
$List = & $lua "list-game-files.lua" "gamefiles-$GameType.txt"
# $List = & git ls-files --recurse-submodules $List
# $List = $List | Select-String -NotMatch "examples","tests"
foreach ($file in $List) {
	$dir="$Dest/$(Split-Path $file)"
	if (Test-Path $dir) {
	} else {
		md $dir
	}
	copy $file $dir -Force -Recurse
}

cd ..
