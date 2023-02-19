//------------------------------------------------------------------------| UHRwinDLG.h                                  //
//                                                                        | UHRwin4, System Zeit und Datum (deutsch)     //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#if !defined(AFX_UHRwinDLG_H__F3AB6CFE_603E_4624_9668_AD40F9F98C3E__INCLUDED_)
#define AFX_UHRwinDLG_H__F3AB6CFE_603E_4624_9668_AD40F9F98C3E__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

//-----------------------------------------------------------------------------| klassen deklaration CAboutDlg
class CAboutDlg : public CDialog
{
	public:
	CAboutDlg(); //-------------------------------------------------------| objekt deklaration

	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX }; //---------------------------------------| resourcen deklaration //
	//}}AFX_DATA

	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX); //-------------------| steuerelement ereignis deklaration	  
	//}}AFX_VIRTUAL
	
	protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//-----------------------------------------------------------------------------| klassen deklaration CUHRwinDlg
class CUHRwinDlg : public CDialog
{
	public:
	CUHRwinDlg(CWnd* pParent = NULL); //----------------------------------| objekt deklaration
	
	void CUHRwinDlg::fhg_(int fhg); //------------------------------------| funktions deklaration
	void CUHRwinDlg::fin_(int fin); //------------------------------------|
	void CUHRwinDlg::fum_(int fum); //------------------------------------|
	void CUHRwinDlg::fuh_(int fuh); //------------------------------------|
	void CUHRwinDlg::fsz_(int fsz); //------------------------------------|
	void CUHRwinDlg::fsl_(int fsl); //------------------------------------|
	void CUHRwinDlg::fmz_(int fmz); //------------------------------------|
	void CUHRwinDlg::fml_(int fml); //------------------------------------|
	void CUHRwinDlg::fkz_(int fkz); //------------------------------------|
	void CUHRwinDlg::fkl_(int fkl); //------------------------------------|
	void CUHRwinDlg::uhr_(int uhr); //------------------------------------|
	void CUHRwinDlg::stzg_(int stzg); //----------------------------------|
	void CUHRwinDlg::mnzg_(int mnzg); //----------------------------------|
	void CUHRwinDlg::skzg_(int skzg); //----------------------------------|
	void CUHRwinDlg::MenueMod();
	
	POINT dlg0, dlg_, u_vs,i_vs; //---------------------------------------| struktur deklaration 
	RECT coord;//---------------------------------------------------------|

	int dlg_x, dlg_y, iptx1, ipty1, iptx2, ipty2; //----------------------| variablen deklaration 
	int sw, tmp, swd;//---------------------------------------------------|
	int szsw;//-----------------------------------------------------------|
	
	double x_, x0_, y_, y0_;//--------------------------------------------|
	double a_, b_, d_, dlgx0, dlgy0;//------------------------------------|
	char ccc[100];//------------------------------------------------------|
	const char* cc;//-----------------------------------------------------|
	CString c, c0, cm, cs, cs1, cd;//-------------------------------------| 

	CDialog m_InfoDlg; //-------------------------------------------------| deklaration <<
	
	//{{AFX_DATA(CUHRwinDlg)
	enum { IDD = IDD_UHRwin_DIALOG }; //----------------------------------| resourcen deklaration //

	//}}AFX_DATA

	//{{AFX_VIRTUAL(CUHRwinDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX); //-------------------| steuerelement ereignis deklaration	
	//}}AFX_VIRTUAL

	protected:
	HICON m_hIcon; //-----------------------------------------------------| icon handler
	HCURSOR m_Csr1; 

	//{{AFX_MSG(CUHRwinDlg)
	virtual BOOL OnInitDialog(); //---------------------------------------| ereignis deklaration
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);//-----------------|
	afx_msg void OnPaint();//---------------------------------------------|
	afx_msg HCURSOR OnQueryDragIcon();//----------------------------------|
	afx_msg void OnSize(UINT nType, int cx, int cy);//--------------------|
	afx_msg void OnClose();//---------------------------------------------|
	afx_msg void OnMove(int x, int y);//----------------------------------|
	afx_msg void OnTimer(UINT nIDEvent);//--------------------------------|
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);//----|
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);//----------------|
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);//------------|
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);//--------------|
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);//----------------|
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);//--------------|
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);//----------------|
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);//------------|
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
