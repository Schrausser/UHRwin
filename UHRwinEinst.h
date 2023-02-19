//------------------------------------------------------------------------| UHRwinEinst.h                                //
//                                                                        | UHRwin4, System Zeit und Datum (deutsch)     //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#if !defined(AFX_UHRWINEINST_H__06375CEA_85D4_424E_A902_947D777C15FE__INCLUDED_)
#define AFX_UHRWINEINST_H__06375CEA_85D4_424E_A902_947D777C15FE__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

//-----------------------------------------------------------------------------| klassen deklaration UHRwinEinst
class UHRwinEinst : public CDialog
{
	public:
	UHRwinEinst(CWnd* pParent = NULL); //--------------------------------| objekt deklaration
 
	//{{AFX_DATA(UHRwinEinst)
	enum { IDD = IDD_Einstellungen };
	BOOL	m_ch_m; //---------------------------------------------------| variablen deklaration 
	BOOL	m_ch_sk; //--------------------------------------------------|
	BOOL	m_ch_st; //--------------------------------------------------|
	BOOL	m_ch_uhr; //-------------------------------------------------|
	CString	m_fhg; //----------------------------------------------------|
	CString	m_mzgfb; //--------------------------------------------------|
	CString	m_mzlf; //---------------------------------------------------|
	CString	m_mnzg; //---------------------------------------------------|
	CString	m_skzg; //---------------------------------------------------|
	CString	m_stzg; //---------------------------------------------------|
	CString	m_uhr; //----------------------------------------------------|
	CString	m_fskzgfb; //------------------------------------------------|
	CString	m_fskzlfb; //------------------------------------------------|
	CString	m_fszgfb; //-------------------------------------------------|
	CString	m_fszlfb; //-------------------------------------------------|
	CString	m_fuhg; //---------------------------------------------------|
	CString	m_furm; //---------------------------------------------------|
	CString	m_fin; //----------------------------------------------------|
	//}}AFX_DATA


	//{{AFX_VIRTUAL(UHRwinEinst)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX); //------------------| steuerelement ereignis deklaration  

	//}}AFX_VIRTUAL

	protected:

	//{{AFX_MSG(UHRwinEinst)
	virtual BOOL OnInitDialog(); //--------------------------------------| ereignis deklaration
	afx_msg void OnPaint(); //-------------------------------------------|
	afx_msg void OnBUTTONreset(); //-------------------------------------|
	virtual void OnOK(); //----------------------------------------------|
	afx_msg void OnCHECKuhr(); //----------------------------------------|
	afx_msg void OnCHECKstzg(); //---------------------------------------|
	afx_msg void OnCHECKskzg(); //---------------------------------------|
	afx_msg void OnCHECKmnzg(); //---------------------------------------|
	afx_msg void OnSelchangeCOMBOfmzgfb(); //----------------------------|
	afx_msg void OnSelchangeCOMBOfmzlf(); //-----------------------------|
	afx_msg void OnSelchangeCOMBOfskzgfb(); //---------------------------|
	afx_msg void OnSelchangeCOMBOfskzlfb(); //---------------------------|
	afx_msg void OnSelchangeCOMBOfszgfb(); //----------------------------|
	afx_msg void OnSelchangeCOMBOfszlfb(); //----------------------------|
	afx_msg void OnSelchangeCOMBOfuhg(); //------------------------------|
	afx_msg void OnSelchangeCOMBOfurm(); //------------------------------|
	afx_msg void OnSelchangeCOMBOfhg(); //-------------------------------|
	afx_msg void OnSelchangeCOMBOfin(); //-------------------------------|
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
