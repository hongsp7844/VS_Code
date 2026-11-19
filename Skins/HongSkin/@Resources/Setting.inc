[Variables]

; =========================================================
; Current State
; =========================================================

CurrentGroup=1

; =========================================================
; Colors
; =========================================================

FontColor=255,255,255
BgColor=20,20,20,220
HoverColor=255,255,255,35

ActiveColor=255,255,255
InactiveColor=170,170,170

; =========================================================
; Icon Animation
; =========================================================

Icon1Current=56
Icon1Target=56

Icon1BaseX=35
Icon1BaseY=30

; =========================================================
; Group 1
; =========================================================

Group1Launcher1Name=VS Code
Group1Launcher1Icon=vscode.png
Group1Launcher1Action=["notepad.exe"]

Group1Launcher2Name=Chrome
Group1Launcher2Icon=vscode.png
Group1Launcher2Action=["notepad.exe"]

Group1Launcher3Name=Discord
Group1Launcher3Icon=vscode.png
Group1Launcher3Action=["notepad.exe"]

Group1Launcher4Name=Steam
Group1Launcher4Icon=vscode.png
Group1Launcher4Action=["notepad.exe"]

Group1Launcher5Name=Explorer
Group1Launcher5Icon=vscode.png
Group1Launcher5Action=["explorer.exe"]

Group1Launcher6Name=Settings
Group1Launcher6Icon=vscode.png
Group1Launcher6Action=["ms-settings:"]

; =========================================================
; Group 2
; =========================================================

Group2Launcher1Name=Notion
Group2Launcher1Icon=vscode.png
Group2Launcher1Action=["notepad.exe"]

Group2Launcher2Name=Spotify
Group2Launcher2Icon=vscode.png
Group2Launcher2Action=["notepad.exe"]

Group2Launcher3Name=Edge
Group2Launcher3Icon=vscode.png
Group2Launcher3Action=["notepad.exe"]

Group2Launcher4Name=Calculator
Group2Launcher4Icon=vscode.png
Group2Launcher4Action=["calc.exe"]

Group2Launcher5Name=Paint
Group2Launcher5Icon=vscode.png
Group2Launcher5Action=["mspaint.exe"]

Group2Launcher6Name=Terminal
Group2Launcher6Icon=vscode.png
Group2Launcher6Action=["wt.exe"]

; =========================================================
; Group Actions
; =========================================================

Group1Action=[!SetVariable CurrentGroup 1][!UpdateMeasure MeasureGroup1][!UpdateMeasure MeasureGroup2][!UpdateMeter Group1Button][!UpdateMeter Group2Button][!Redraw][!DeactivateConfig "Hongskin\Modules" "Group2.ini"][!ActivateConfig "Hongskin\Modules" "Group1.ini"]

Group2Action=[!SetVariable CurrentGroup 2][!UpdateMeasure MeasureGroup1][!UpdateMeasure MeasureGroup2][!UpdateMeter Group1Button][!UpdateMeter Group2Button][!Redraw][!DeactivateConfig "Hongskin\Modules" "Group1.ini"][!ActivateConfig "Hongskin\Modules" "Group2.ini"]