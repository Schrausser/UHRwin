//------------------------------------------------------------------------| UHRwin.cpp                                   //
//                                                                        | UHRwin4, System Zeit und Datum (deutsch)     //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#include "stdafx.h"
#include "UHRwin.h"
#include "UHRwinDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//------------------------------------------------------------------------| ereignis-deklaration
BEGIN_MESSAGE_MAP(CUHRwinApp, CWinApp)
	//{{AFX_MSG_MAP(CUHRwinApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

CUHRwinApp::CUHRwinApp(){}
CUHRwinApp theApp;


//------------------------------------------------------------------------| programmstart
BOOL CUHRwinApp::InitInstance()
{
	#ifdef _AFXDLL 
	Enable3dControls();		
	#else 
	Enable3dControlsStatic();	
	#endif

	     CUHRwinDlg dlg;
	  m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	
	if (nResponse == IDOK){	}
	else if (nResponse == IDCANCEL){}
	
	return 0;
}
