; 该脚本使用 易量安装(az.eliang.com) 向导生成
; 安装程序初始定义常量
!define PRODUCT_NAME "Serial"
!define PRODUCT_VERSION "1.0"
!define PRODUCT_PUBLISHER "杏林洁白"
!define PRODUCT_WEB_SITE "http://www.mycompany.com"
!define PRODUCT_DIR_REGKEY "Software\Microsoft\Windows\CurrentVersion\App Paths\MySerial.exe"
!define PRODUCT_UNINST_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}"
!define PRODUCT_UNINST_ROOT_KEY "HKLM"

SetCompressor lzma

; 提升安装程序权限(vista,win7,win8)
RequestExecutionLevel admin

; ------ MUI 现代界面定义 ------
!include "MUI2.nsh"

; MUI 预定义常量
!define MUI_ABORTWARNING
!define MUI_HEADERIMAGE
!define MUI_HEADERIMAGE_UNBITMAP "${NSISDIR}\Contrib\Graphics\Header\eliang-uninstall.bmp"
!define MUI_ICON "G:\Qt\code\MySerial\favicon.ico"
!define MUI_UNICON "G:\Qt\code\MySerial\favicon.ico"
!define MUI_UNWELCOMEFINISHPAGE_BITMAP "${NSISDIR}\Contrib\Graphics\Wizard\eliang-uninstall.bmp"

; 欢迎页面
!insertmacro MUI_PAGE_WELCOME
; 安装目录选择页面
!insertmacro MUI_PAGE_DIRECTORY
; 安装过程页面
!insertmacro MUI_PAGE_INSTFILES
; 安装完成页面
!define MUI_FINISHPAGE_RUN "$INSTDIR\MySerial.exe"
!insertmacro MUI_PAGE_FINISH

; 安装卸载过程页面
!insertmacro MUI_UNPAGE_WELCOME
!insertmacro MUI_UNPAGE_INSTFILES
!insertmacro MUI_UNPAGE_FINISH

; 安装界面包含的语言设置
!insertmacro MUI_LANGUAGE "SimpChinese"

; ------ MUI 现代界面定义结束 ------

Name "${PRODUCT_NAME} ${PRODUCT_VERSION}"
OutFile "setup.exe"
;ELiangID 统计编号     /*  安装统计项名称：【Serial】  */
InstallDir "$PROGRAMFILES\Serial"
InstallDirRegKey HKLM "${PRODUCT_UNINST_KEY}" "UninstallString"
ShowInstDetails show
ShowUninstDetails show
BrandingText " "

;安装包版本号格式必须为x.x.x.x的4组整数,每组整数范围0~65535,如:2.0.1.2
;若使用易量统计,版本号将用于区分不同版本的安装情况,此时建议用户务必填写正确的版本号
;!define INSTALL_VERSION "2.0.1.2"

;VIProductVersion "${INSTALL_VERSION}"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "ProductName"      "Serial"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "Comments"         "Serial(杏林洁白)"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "CompanyName"      "杏林洁白"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "LegalCopyright"   "杏林洁白(http://www.mycompany.com)"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "FileDescription"  "Serial"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "ProductVersion"   "${INSTALL_VERSION}"
;VIAddVersionKey /LANG=${LANG_SimpChinese} "FileVersion"      "${INSTALL_VERSION}"

Section "MainSection" SEC01
  SetOutPath "$INSTDIR"
  SetOverwrite ifnewer
  File "C:\Users\86151\Desktop\my\D3Dcompiler_47.dll"
  SetOutPath "$INSTDIR\iconengines"
  File "C:\Users\86151\Desktop\my\iconengines\qsvgicon.dll"
  SetOutPath "$INSTDIR\imageformats"
  File "C:\Users\86151\Desktop\my\imageformats\qgif.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qicns.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qico.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qjpeg.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qsvg.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qtga.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qtiff.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qwbmp.dll"
  File "C:\Users\86151\Desktop\my\imageformats\qwebp.dll"
  SetOutPath "$INSTDIR"
  File "C:\Users\86151\Desktop\my\libEGL.dll"
  File "C:\Users\86151\Desktop\my\libgcc_s_dw2-1.dll"
  File "C:\Users\86151\Desktop\my\libGLESV2.dll"
  File "C:\Users\86151\Desktop\my\libstdc++-6.dll"
  File "C:\Users\86151\Desktop\my\libwinpthread-1.dll"
  File "C:\Users\86151\Desktop\my\MySerial.exe"
  File "C:\Users\86151\Desktop\my\opengl32sw.dll"
  SetOutPath "$INSTDIR\platforms"
  File "C:\Users\86151\Desktop\my\platforms\qwindows.dll"
  SetOutPath "$INSTDIR"
  File "C:\Users\86151\Desktop\my\Qt5Core.dll"
  File "C:\Users\86151\Desktop\my\Qt5Gui.dll"
  File "C:\Users\86151\Desktop\my\Qt5SerialPort.dll"
  File "C:\Users\86151\Desktop\my\Qt5Svg.dll"
  File "C:\Users\86151\Desktop\my\Qt5Widgets.dll"
  SetOutPath "$INSTDIR\translations"
  File "C:\Users\86151\Desktop\my\translations\qt_bg.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_ca.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_cs.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_da.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_de.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_en.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_es.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_fi.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_fr.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_gd.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_he.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_hu.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_it.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_ja.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_ko.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_lv.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_pl.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_ru.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_sk.qm"
  File "C:\Users\86151\Desktop\my\translations\qt_uk.qm"

  CreateDirectory "$SMPROGRAMS\Serial"
  CreateShortCut "$SMPROGRAMS\Serial\Serial.lnk" "$INSTDIR\MySerial.exe"
  CreateShortCut "$DESKTOP\Serial.lnk" "$INSTDIR\MySerial.exe"
SectionEnd

Section -AdditionalIcons
  WriteINIStr "$INSTDIR\${PRODUCT_NAME}.url" "InternetShortcut" "URL" "${PRODUCT_WEB_SITE}"
  CreateShortCut "$SMPROGRAMS\Serial\访问Serial主页.lnk" "$INSTDIR\${PRODUCT_NAME}.url"
  CreateShortCut "$SMPROGRAMS\Serial\卸载Serial.lnk" "$INSTDIR\uninst.exe"
SectionEnd

Section -Post
  WriteUninstaller "$INSTDIR\uninst.exe"
  WriteRegStr HKLM "${PRODUCT_DIR_REGKEY}" "" "$INSTDIR\MySerial.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayName" "$(^Name)"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "UninstallString" "$INSTDIR\uninst.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayIcon" "$INSTDIR\MySerial.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayVersion" "${PRODUCT_VERSION}"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "URLInfoAbout" "${PRODUCT_WEB_SITE}"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "Publisher" "${PRODUCT_PUBLISHER}"
SectionEnd

/******************************
*  以下是安装程序的卸载部分  *
******************************/

Section Uninstall
  Delete "$INSTDIR\${PRODUCT_NAME}.url"
  Delete "$INSTDIR\uninst.exe"
  Delete "$INSTDIR\D3Dcompiler_47.dll"
  Delete "$INSTDIR\iconengines\qsvgicon.dll"
  Delete "$INSTDIR\imageformats\qgif.dll"
  Delete "$INSTDIR\imageformats\qicns.dll"
  Delete "$INSTDIR\imageformats\qico.dll"
  Delete "$INSTDIR\imageformats\qjpeg.dll"
  Delete "$INSTDIR\imageformats\qsvg.dll"
  Delete "$INSTDIR\imageformats\qtga.dll"
  Delete "$INSTDIR\imageformats\qtiff.dll"
  Delete "$INSTDIR\imageformats\qwbmp.dll"
  Delete "$INSTDIR\imageformats\qwebp.dll"
  Delete "$INSTDIR\libEGL.dll"
  Delete "$INSTDIR\libgcc_s_dw2-1.dll"
  Delete "$INSTDIR\libGLESV2.dll"
  Delete "$INSTDIR\libstdc++-6.dll"
  Delete "$INSTDIR\libwinpthread-1.dll"
  Delete "$INSTDIR\MySerial.exe"
  Delete "$INSTDIR\opengl32sw.dll"
  Delete "$INSTDIR\platforms\qwindows.dll"
  Delete "$INSTDIR\Qt5Core.dll"
  Delete "$INSTDIR\Qt5Gui.dll"
  Delete "$INSTDIR\Qt5SerialPort.dll"
  Delete "$INSTDIR\Qt5Svg.dll"
  Delete "$INSTDIR\Qt5Widgets.dll"
  Delete "$INSTDIR\translations\qt_bg.qm"
  Delete "$INSTDIR\translations\qt_ca.qm"
  Delete "$INSTDIR\translations\qt_cs.qm"
  Delete "$INSTDIR\translations\qt_da.qm"
  Delete "$INSTDIR\translations\qt_de.qm"
  Delete "$INSTDIR\translations\qt_en.qm"
  Delete "$INSTDIR\translations\qt_es.qm"
  Delete "$INSTDIR\translations\qt_fi.qm"
  Delete "$INSTDIR\translations\qt_fr.qm"
  Delete "$INSTDIR\translations\qt_gd.qm"
  Delete "$INSTDIR\translations\qt_he.qm"
  Delete "$INSTDIR\translations\qt_hu.qm"
  Delete "$INSTDIR\translations\qt_it.qm"
  Delete "$INSTDIR\translations\qt_ja.qm"
  Delete "$INSTDIR\translations\qt_ko.qm"
  Delete "$INSTDIR\translations\qt_lv.qm"
  Delete "$INSTDIR\translations\qt_pl.qm"
  Delete "$INSTDIR\translations\qt_ru.qm"
  Delete "$INSTDIR\translations\qt_sk.qm"
  Delete "$INSTDIR\translations\qt_uk.qm"

  Delete "$SMPROGRAMS\Serial\访问Serial主页.lnk"
  Delete "$SMPROGRAMS\Serial\卸载Serial.lnk"
  Delete "$SMPROGRAMS\Serial\Serial.lnk"
  Delete "$DESKTOP\Serial.lnk"

  RMDir "$SMPROGRAMS\Serial"

  RMDir "$INSTDIR\iconengines"
  RMDir "$INSTDIR\imageformats"
  RMDir "$INSTDIR\platforms"
  RMDir "$INSTDIR\translations"

  RMDir "$INSTDIR"

  DeleteRegKey ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}"
  DeleteRegKey HKLM "${PRODUCT_DIR_REGKEY}"
SectionEnd

/* 根据 NSIS 脚本编辑规则,所有 Function 区段必须放置在 Section 区段之后编写,以避免安装程序出现未可预知的问题. */

Function un.onInit
FunctionEnd

Function un.onUninstSuccess
FunctionEnd
