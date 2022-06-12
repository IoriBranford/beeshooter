param(
$Version=$args[0],
$Account="iori_branford@hotmail.com",
$Project=(Split-Path (Get-Location) -Leaf),
$SteamCmd="steamcmd"
)

if ( -not $Version ) {
	echo "Usage: publish-steam.ps1 <Version>"
	echo "(after downloading artifacts via download-artifacts.sh)"
	Exit 1
}

function Extract {
	param($Channel=$args[0])
	$File=(Get-Item "$Project-$Version-$Channel.zip")
	if ($File) {
		Expand-Archive -Force -Path $File -DestinationPath .
	}
	return $File
}
$Windows=(Extract "win-64")
$Linux=(Extract "linux-x86_64")
$WindowsDemo=(Extract "demo-win-64")
$LinuxDemo=(Extract "demo-linux-x86_64")

$AppBuildFull=(Get-Item steam/app_build_full.vdf)
$runAppBuildFull=($Windows && $Linux ? "+run_app_build $AppBuildFull" : "")
$AppBuildDemo=(Get-Item steam/app_build_demo.vdf)
$runAppBuildDemo=($WindowsDemo && $LinuxDemo ? "+run_app_build $AppBuildDemo" : "")
& $SteamCmd +login $Account +run_app_build $AppBuildFull +run_app_build $AppBuildDemo +quit
