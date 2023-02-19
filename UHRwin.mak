# Microsoft Developer Studio Generated NMAKE File, Based on UHRwin.dsp
!IF "$(CFG)" == ""
CFG=UHRwin - Win32 Debug
!MESSAGE No configuration specified. Defaulting to UHRwin - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "UHRwin - Win32 Release" && "$(CFG)" != "UHRwin - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "UHRwin.mak" CFG="UHRwin - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "UHRwin - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "UHRwin - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "UHRwin - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\UHRwin.exe"

!ELSE 

ALL : "$(OUTDIR)\UHRwin.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\UHRwin.obj"
	-@erase "$(INTDIR)\UHRwin.pch"
	-@erase "$(INTDIR)\UHRwin.res"
	-@erase "$(INTDIR)\UHRwinDlg.obj"
	-@erase "$(INTDIR)\UHRwinEinst.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\UHRwin.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /Fp"$(INTDIR)\UHRwin.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x407 /fo"$(INTDIR)\UHRwin.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\UHRwin.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\UHRwin.pdb" /machine:I386 /out:"$(OUTDIR)\UHRwin.exe" 
LINK32_OBJS= \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\UHRwin.obj" \
	"$(INTDIR)\UHRwin.res" \
	"$(INTDIR)\UHRwinDlg.obj" \
	"$(INTDIR)\UHRwinEinst.obj"

"$(OUTDIR)\UHRwin.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "UHRwin - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\UHRwin.exe"

!ELSE 

ALL : "$(OUTDIR)\UHRwin.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\UHRwin.obj"
	-@erase "$(INTDIR)\UHRwin.pch"
	-@erase "$(INTDIR)\UHRwin.res"
	-@erase "$(INTDIR)\UHRwinDlg.obj"
	-@erase "$(INTDIR)\UHRwinEinst.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\UHRwin.exe"
	-@erase "$(OUTDIR)\UHRwin.ilk"
	-@erase "$(OUTDIR)\UHRwin.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MDd /w /W0 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_AFXDLL" /Fp"$(INTDIR)\UHRwin.pch" /Yu"stdafx.h"\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x407 /fo"$(INTDIR)\UHRwin.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\UHRwin.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\UHRwin.pdb" /debug /machine:I386 /out:"$(OUTDIR)\UHRwin.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\UHRwin.obj" \
	"$(INTDIR)\UHRwin.res" \
	"$(INTDIR)\UHRwinDlg.obj" \
	"$(INTDIR)\UHRwinEinst.obj"

"$(OUTDIR)\UHRwin.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(CFG)" == "UHRwin - Win32 Release" || "$(CFG)" == "UHRwin - Win32 Debug"
SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "UHRwin - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /Fp"$(INTDIR)\UHRwin.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\UHRwin.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "UHRwin - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /w /W0 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_AFXDLL" /Fp"$(INTDIR)\UHRwin.pch" /Yc"stdafx.h"\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\UHRwin.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 

SOURCE=.\UHRwin.cpp

!IF  "$(CFG)" == "UHRwin - Win32 Release"

DEP_CPP_UHRWI=\
	".\StdAfx.h"\
	".\UHRwin.h"\
	".\UHRwinDlg.h"\
	

"$(INTDIR)\UHRwin.obj" : $(SOURCE) $(DEP_CPP_UHRWI) "$(INTDIR)"\
 "$(INTDIR)\UHRwin.pch"


!ELSEIF  "$(CFG)" == "UHRwin - Win32 Debug"

DEP_CPP_UHRWI=\
	".\UHRwin.h"\
	".\UHRwinDlg.h"\
	

"$(INTDIR)\UHRwin.obj" : $(SOURCE) $(DEP_CPP_UHRWI) "$(INTDIR)"\
 "$(INTDIR)\UHRwin.pch"


!ENDIF 

SOURCE=.\UHRwin.rc
DEP_RSC_UHRWIN=\
	".\res\cursor1.cur"\
	".\res\UHRwin.ico"\
	".\res\UHRwin.rc2"\
	

"$(INTDIR)\UHRwin.res" : $(SOURCE) $(DEP_RSC_UHRWIN) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\UHRwinDlg.cpp

!IF  "$(CFG)" == "UHRwin - Win32 Release"

DEP_CPP_UHRWIND=\
	".\StdAfx.h"\
	".\UHRwin.h"\
	".\UHRwinDlg.h"\
	".\UHRwinEinst.h"\
	

"$(INTDIR)\UHRwinDlg.obj" : $(SOURCE) $(DEP_CPP_UHRWIND) "$(INTDIR)"\
 "$(INTDIR)\UHRwin.pch"


!ELSEIF  "$(CFG)" == "UHRwin - Win32 Debug"

DEP_CPP_UHRWIND=\
	".\UHRwin.h"\
	".\UHRwinDlg.h"\
	".\UHRwinEinst.h"\
	

"$(INTDIR)\UHRwinDlg.obj" : $(SOURCE) $(DEP_CPP_UHRWIND) "$(INTDIR)"\
 "$(INTDIR)\UHRwin.pch"


!ENDIF 

SOURCE=.\UHRwinEinst.cpp

!IF  "$(CFG)" == "UHRwin - Win32 Release"

DEP_CPP_UHRWINE=\
	".\StdAfx.h"\
	".\UHRwin.h"\
	".\UHRwinDlg.h"\
	".\UHRwinEinst.h"\
	

"$(INTDIR)\UHRwinEinst.obj" : $(SOURCE) $(DEP_CPP_UHRWINE) "$(INTDIR)"\
 "$(INTDIR)\UHRwin.pch"


!ELSEIF  "$(CFG)" == "UHRwin - Win32 Debug"

DEP_CPP_UHRWINE=\
	".\UHRwin.h"\
	".\UHRwinDlg.h"\
	".\UHRwinEinst.h"\
	

"$(INTDIR)\UHRwinEinst.obj" : $(SOURCE) $(DEP_CPP_UHRWINE) "$(INTDIR)"\
 "$(INTDIR)\UHRwin.pch"


!ENDIF 


!ENDIF 

