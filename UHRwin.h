//------------------------------------------------------------------------| UHRwin.h                                     //
//                                                                        | UHRwin4, System Zeit und Datum (deutsch)     //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#if !defined(AFX_UHRwin_H__C99905F1_6FD7_4B76_B6C8_ADA1BAD55756__INCLUDED_)
#define AFX_UHRwin_H__C99905F1_6FD7_4B76_B6C8_ADA1BAD55756__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"	

//-----------------------------------------------------------------------------| klassen deklaration CUHRwinApp
class CUHRwinApp : public CWinApp
{
	public:
	CUHRwinApp();  //---------------------------------------------------| objekt deklaration 

	//{{AFX_VIRTUAL(CUHRwinApp)
	public: 
	virtual BOOL InitInstance(); //-------------------------------------| ereignis deklaration
	//}}AFX_VIRTUAL


	//{{AFX_MSG(CUHRwinApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


//{{AFX_INSERT_LOCATION}}

#endif 
