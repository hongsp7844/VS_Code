;SPECTRUM Launcher v3 for Rainmeter 4.2+
;by /u/TheProtagonists
;Creative Commons 4.0 BY-NC-SA



;Credits:
;The icons used in this skin are from https://materialdesignicons.com/ and https://icons8.com/
;All images, artworks and backgrounds used in this skin are not created by me, and all rights goes to their original creators and copyright holders



;MSI Afterburner is required for the taskbar system monitoring skin and must be running in the background



;=========================================================================================================================

[Variables]

;-------------------------------------------------------------------------------------------------------------------------
;Gradient settings
;Follow the instruction here to make gradients: https://docs.rainmeter.net/manual/meters/shape/#DefiningGradients

BarGradient=180 | 0,178,255,255 ; 0.0 | 139,22,255,255 ; 0.5 | 255,51,51,255 ; 1.0

;-------------------------------------------------------------------------------------------------------------------------
;General settings

;This value controls the speed of the skin active/deactive animation. The lower the value the faster the speed.
AnimationFactor=16

;This controls if battery is displayed across the skins. 0 to display and 1 to hide them.
ShowBattery=0

;These changes the font used in the skin.
;Font used on the bars
BarFont=Borda 4
;Font used by the launcher buttons
LauncherFont=Baksheesh


;-------------------------------------------------------------------------------------------------------------------------
;Main Launcher Settings

;ICON LOCATION: Documents\Rainmeter\Skins\Spectrum V3\@Resources\Images\Icons
;MOUSEOVER BG LOCATION: Documents\Rainmeter\Skins\Spectrum V3\@Resources\Images\Mouseover

;While they are categorically organized, all these launchers can be used to launch anything: files, folders, shell commands, steam games, websites and browser extensions (Well, you probably can't launch a rocket with this... or maybe you can because I can't tell you what to do)

;Editing notes:
;	If the path contains space, use quote
;	Enter the full address to launch websites through your default browser, use browser.exe "site address" to specify browser
;	Use explorer.exe "application path or folder path" for launching applications and folders
;	Use steam://rungameid/ to run steam games (note that not all steam games can be directly run like this)
;	Use shortcutname.lnk to launch a shortcut
;	Refer to https://docs.rainmeter.net/tips/launching-windows-special-folders/ for launching windows special folders
;	Specifying image extension is not needed for png images (meaning you can leave the .png out if you use png images)

;=========================================================================================================================
;Group 1  Hong

;Name and icon for the navbar

Group1BarName=01
Group1BarIcon=hexagons.png

;Launcher settings: action, name, icon and mouseover background

Group1Launcher1Action=["C:\Program Files\Microsoft Visual Studio\2022\Professional\Common7\IDE\devenv.exe"]
Group1Launcher1Name=Visual Studio 2022
Group1Launcher1Icon=visualstudio.png
Group1Launcher1BG=012

Group1Launcher2Action=["C:\Program Files\MySQL\MySQL Workbench 8.0\MySQLWorkbench.exe"]
Group1Launcher2Name=mySQL Workbench
Group1Launcher2Icon=mySQL.png
Group1Launcher2BG=056

Group1Launcher3Action=explorer.exe "C:\Program Files\Adobe\Adobe Photoshop CS6 (64 Bit)\Photoshop.exe"
Group1Launcher3Name=Photoshop
Group1Launcher3Icon=_c_photoshop.png
Group1Launcher3BG=021

Group1Launcher4Action=explorer.exe "C:\Program Files\Adobe\Adobe Illustrator CS6 (64 Bit)\Support Files\Contents\Windows\Illustrator.exe"
Group1Launcher4Name=Illustrator
Group1Launcher4Icon=_c_illustrator.png
Group1Launcher4BG=047

Group1Launcher5Action=["C:\Program Files (x86)\Kakao\KakaoTalk\KakaoTalk.exe"]
Group1Launcher5Name=KaKaoTalk
Group1Launcher5Icon=KaKao.png
Group1Launcher5BG=106

Group1Launcher6Action=["C:\Program Files\Google\Chrome\Application\chrome.exe"]
Group1Launcher6Name=Chrome
Group1Launcher6Icon=Chrome.png
Group1Launcher6BG=102

;=========================================================================================================================
;Group 2 

;Name and icon for the navbar

Group2BarName=02
Group2BarIcon=arc.png

;Launcher settings: action, name, icon and mouseover background

Group2Launcher1Action=explorer.exe "C:\Program Files\Adobe\Adobe After Effects CS6\Support Files\AfterFX.exe"
Group2Launcher1Name=After Effects
Group2Launcher1Icon=_c_aftereffects.png
Group2Launcher1BG=093

Group2Launcher2Action=explorer.exe "C:\Program Files\Adobe\Adobe Premiere Pro CS6\Adobe Premiere Pro.exe"
Group2Launcher2Name=Premiere
Group2Launcher2Icon=_c_premiere.png
Group2Launcher2BG=027

Group2Launcher3Action=explorer.exe "C:\Users\Tack\AppData\Local\GitHubDesktop\GitHubDesktop.exe"
Group2Launcher3Name=Github Desktop
Group2Launcher3Icon=_d_github.png
Group2Launcher3BG=055

Group2Launcher4Action=explorer.exe "C:\Users\TheProtagonists\AppData\Local\GPMDP_3\app-4.5.0\Google Play Music Desktop Player.exe"
Group2Launcher4Name=GPMDP
Group2Launcher4Icon=googleplaymusic.png
Group2Launcher4BG=046

Group2Launcher5Action=explorer.exe "C:\Program Files (x86)\Netease\CloudMusic\cloudmusic.exe"
Group2Launcher5Name=NetEase Music
Group2Launcher5Icon=neteasemusic.png
Group2Launcher5BG=020

Group2Launcher6Action=explorer.exe "C:\Program Files (x86)\Tencent\QQMusic\QQMusic.exe"
Group2Launcher6Name=QQ Music
Group2Launcher6Icon=qqmusic.png
Group2Launcher6BG=120

;=========================================================================================================================
;Group 3 

;Name and icon for the navbar

Group3BarName=03
Group3BarIcon=gamepad.png

;Launcher settings: action, name, icon and mouseover background

Group3Launcher1Action=steam://rungameid/265610
Group3Launcher1Name=Epic Battle Fantasy 4
Group3Launcher1Icon=_g_epicbattlefantasy.png
Group3Launcher1BG=041

Group3Launcher2Action=steam://rungameid/391540
Group3Launcher2Name=Undertale
Group3Launcher2Icon=_g_undertale.png
Group3Launcher2BG=062

Group3Launcher3Action=steam://rungameid/351710
Group3Launcher3Name=Neptunia ReBirth Mk2
Group3Launcher3Icon=_g_neptunia.png
Group3Launcher3BG=022

Group3Launcher4Action=steam://rungameid/8930
Group3Launcher4Name=Civilization V
Group3Launcher4Icon=_g_civilizationv.png
Group3Launcher4BG=095

Group3Launcher5Action=steam://rungameid/255710
Group3Launcher5Name=Cities Skylines
Group3Launcher5Icon=_g_citiesskylinesalt.png
Group3Launcher5BG=036

Group3Launcher6Action=steam://rungameid/281990
Group3Launcher6Name=Stellaris
Group3Launcher6Icon=_g_stellaris.png
Group3Launcher6BG=076

;=========================================================================================================================
