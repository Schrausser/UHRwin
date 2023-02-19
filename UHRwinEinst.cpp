//------------------------------------------------------------------------| UHRwinEinst.cpp                              //
//                                                                        | UHRwin4, System Zeit und Datum (deutsch)     //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  // 
//

#include "stdafx.h"
#include "UHRwin.h"
#include "UHRwinEinst.h"
#include "UHRwinDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//--------------------------------------------------------| variableninitialisierung CUHRwinEinst
UHRwinEinst::UHRwinEinst(CWnd* pParent )
	: CDialog(UHRwinEinst::IDD, pParent)
{
	//{{AFX_DATA_INIT(UHRwinEinst)
	m_ch_m = 1;
	m_ch_sk = 1;
	m_ch_st = 1;
	m_ch_uhr = 1;
	m_fhg = "13357270";
	m_mzgfb = "16777215";
	m_mzlf = "0";
	m_mnzg = "EIN";
	m_skzg = "EIN";
	m_stzg = "EIN";
	m_uhr = "EIN";
	m_fskzgfb = "16777215";
	m_fskzlfb = "0";
	m_fszgfb = "16777215";
	m_fszlfb = "0";
	m_fuhg = "13357270";
	m_furm = "16777215";
	m_fin = "8421504";
	//}}AFX_DATA_INIT
}

//--------------------------------------------------------| steuerelement-initialisierung CUHRwinEinst
void UHRwinEinst::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(UHRwinEinst)
	DDX_Check(pDX, IDC_CHECK_mnzg, m_ch_m);
	DDX_Check(pDX, IDC_CHECK_skzg, m_ch_sk);
	DDX_Check(pDX, IDC_CHECK_stzg, m_ch_st);
	DDX_Check(pDX, IDC_CHECK_uhr, m_ch_uhr);
	DDX_CBString(pDX, IDC_COMBO_fhg, m_fhg);
	DDX_CBString(pDX, IDC_COMBO_fmzgfb, m_mzgfb);
	DDX_CBString(pDX, IDC_COMBO_fmzlf, m_mzlf);
	DDX_Text(pDX, IDC_EDIT_mnzg, m_mnzg);
	DDX_Text(pDX, IDC_EDIT_skzg, m_skzg);
	DDX_Text(pDX, IDC_EDIT_stzg, m_stzg);
	DDX_Text(pDX, IDC_EDIT_uhr, m_uhr);
	DDX_CBString(pDX, IDC_COMBO_fskzgfb, m_fskzgfb);
	DDX_CBString(pDX, IDC_COMBO_fskzlfb, m_fskzlfb);
	DDX_CBString(pDX, IDC_COMBO_fszgfb, m_fszgfb);
	DDX_CBString(pDX, IDC_COMBO_fszlfb, m_fszlfb);
	DDX_CBString(pDX, IDC_COMBO_fuhg, m_fuhg);
	DDX_CBString(pDX, IDC_COMBO_furm, m_furm);
	DDX_CBString(pDX, IDC_COMBO_fin, m_fin);
	//}}AFX_DATA_MAP
}

//--------------------------------------------------------| ereignis-deklaration CUHRwinEinst
BEGIN_MESSAGE_MAP(UHRwinEinst, CDialog)
	//{{AFX_MSG_MAP(UHRwinEinst)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON_reset, OnBUTTONreset)
	ON_BN_CLICKED(IDC_CHECK_uhr, OnCHECKuhr)
	ON_BN_CLICKED(IDC_CHECK_stzg, OnCHECKstzg)
	ON_BN_CLICKED(IDC_CHECK_skzg, OnCHECKskzg)
	ON_BN_CLICKED(IDC_CHECK_mnzg, OnCHECKmnzg)
	ON_CBN_SELCHANGE(IDC_COMBO_fmzgfb, OnSelchangeCOMBOfmzgfb)
	ON_CBN_SELCHANGE(IDC_COMBO_fmzlf, OnSelchangeCOMBOfmzlf)
	ON_CBN_SELCHANGE(IDC_COMBO_fskzgfb, OnSelchangeCOMBOfskzgfb)
	ON_CBN_SELCHANGE(IDC_COMBO_fskzlfb, OnSelchangeCOMBOfskzlfb)
	ON_CBN_SELCHANGE(IDC_COMBO_fszgfb, OnSelchangeCOMBOfszgfb)
	ON_CBN_SELCHANGE(IDC_COMBO_fszlfb, OnSelchangeCOMBOfszlfb)
	ON_CBN_SELCHANGE(IDC_COMBO_fuhg, OnSelchangeCOMBOfuhg)
	ON_CBN_SELCHANGE(IDC_COMBO_furm, OnSelchangeCOMBOfurm)
	ON_CBN_SELCHANGE(IDC_COMBO_fhg, OnSelchangeCOMBOfhg)
	ON_CBN_SELCHANGE(IDC_COMBO_fin, OnSelchangeCOMBOfin)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

//--------------------------------------------------------| bei dialogstart CUHRwinEinst
BOOL UHRwinEinst::OnInitDialog() 
{
	CDialog::OnInitDialog();

	UpdateData(1);
	
	CWinApp*   pApp = AfxGetApp(); //ini profil lesen
	
	m_fhg    = pApp->GetProfileString("Farbe","Hintergrund","13357270");
	m_fin    = pApp->GetProfileString("Farbe","Info","8421504");
	m_furm   = pApp->GetProfileString("Farbe","Uhrrahmen","16777215");
	m_fuhg   = pApp->GetProfileString("Farbe","Uhrhintergrund","13357270");
	m_fszgfb = pApp->GetProfileString("Farbe","Stundenzeiger","16777215");
	m_fszlfb = pApp->GetProfileString("Farbe","Stundenzahl","0");
	m_mzgfb  = pApp->GetProfileString("Farbe","Minutenzeiger","16777215");
	m_mzlf   = pApp->GetProfileString("Farbe","Minutenzahl","0");
	m_fskzgfb= pApp->GetProfileString("Farbe","Sekundenzeiger","16777215");
	m_fskzlfb= pApp->GetProfileString("Farbe","Sekundenzahl","0");
	m_ch_uhr = pApp->GetProfileInt("Darstellung","Uhr",1);
	m_ch_st  = pApp->GetProfileInt("Darstellung","Stundenzeiger",1);
	m_ch_m   = pApp->GetProfileInt("Darstellung","Minutenzeiger",1);
	m_ch_sk  = pApp->GetProfileInt("Darstellung","Sekundenzeiger",1);

	                m_uhr = "EIN";
	if(m_ch_uhr==0) m_uhr = "AUS";

		           m_stzg = "EIN";
	if(m_ch_st==0) m_stzg = "AUS";

			       m_skzg = "EIN";
	if(m_ch_sk==0) m_skzg = "AUS";

				  m_mnzg = "EIN";
	if(m_ch_m==0) m_mnzg = "AUS";

	UpdateData(0);
	
	return 1;                
}

//-----------------------------------------------------------| OnPaint CUHRwinEinst 
void UHRwinEinst::OnPaint() 
{
	CPaintDC ooo(this); 
						 CRect o1(91, 17, 106, 34);
			 ooo.FillSolidRect(o1,   atoi(m_fhg) );

			             CRect o10(91, 40, 106, 57);
			 ooo.FillSolidRect(o10,   atoi(m_fin) );
						
					     CRect o2(91, 110, 106, 127);	
			 ooo.FillSolidRect(o2,   atoi(m_furm) );

			 			 CRect o3(91, 134, 106, 150);	
			 ooo.FillSolidRect(o3,   atoi(m_fuhg) );

			 			 CRect o4(91, 202, 106, 220);	
			 ooo.FillSolidRect(o4,   atoi(m_fszgfb) );

			 		     CRect o5(91, 225, 106, 242);	
			 ooo.FillSolidRect(o5,   atoi(m_fszlfb) );

			 		     CRect o6(91, 293, 106, 310);	
			 ooo.FillSolidRect(o6,   atoi(m_mzgfb) );

			 		     CRect o7(91, 318, 106, 335);	
			 ooo.FillSolidRect(o7,   atoi(m_mzlf) );

						 CRect o8(91, 384, 106, 401);	
			 ooo.FillSolidRect(o8,   atoi(m_fskzgfb) );

			 		     CRect o9(91, 407, 106, 424);	
			 ooo.FillSolidRect(o9,   atoi(m_fskzlfb ) );
}

//-----------------------------------------------------------| Reset ereignis CUHRwinEinst
void UHRwinEinst::OnBUTTONreset() 
{
	UpdateData(1);

	m_ch_m = 1;
	m_ch_sk = 1;
	m_ch_st = 1;
	m_ch_uhr = 1;
	m_fhg = "13357270";
	m_mzgfb = "16777215";
	m_mzlf = "0";
	m_mnzg = "EIN";
	m_skzg = "EIN";
	m_stzg = "EIN";
	m_uhr = "EIN";
	m_fskzgfb = "16777215";
	m_fskzlfb = "0";
	m_fszgfb = "16777215";
	m_fszlfb = "0";
	m_fuhg = "13357270";
	m_furm = "16777215";
	m_fin = "8421504";

	UpdateData(0);

	RedrawWindow();	
}

//-----------------------------------------------------------| OnOk CUHRwinEinst
void UHRwinEinst::OnOK() 
{
	UpdateData(0);

	CUHRwinDlg o;

	         o.fhg_( atoi(m_fhg) );
			 o.fin_( atoi(m_fin) );
	         o.fum_( atoi(m_furm) );
	 		 o.fuh_( atoi(m_fuhg) );
	         o.fsz_( atoi(m_fszgfb) );
			 o.fsl_( atoi(m_fszlfb) );
			 o.fmz_( atoi(m_mzgfb) );
			 o.fml_( atoi(m_mzlf) );
			 o.fkz_( atoi(m_fskzgfb) );
			 o.fkl_( atoi(m_fskzlfb) );
			 o.uhr_( m_ch_uhr );
			 o.stzg_( m_ch_st );
			 o.skzg_( m_ch_sk );
			 o.mnzg_( m_ch_m );

	UpdateData(1);

	CWinApp* pApp = AfxGetApp(); //ini profil schreiben

			 pApp->WriteProfileString("Farbe","Hintergrund",m_fhg);
			 pApp->WriteProfileString("Farbe","Info",m_fin);
			 pApp->WriteProfileString("Farbe","Uhrrahmen",m_furm);
		     pApp->WriteProfileString("Farbe","Uhrhintergrund",m_fuhg);
			 pApp->WriteProfileString("Farbe","Stundenzeiger",m_fszgfb);
	         pApp->WriteProfileString("Farbe","Stundenzahl",m_fszlfb);
			 pApp->WriteProfileString("Farbe","Minutenzeiger",m_mzgfb);
			 pApp->WriteProfileString("Farbe","Minutenzahl",m_mzlf  );
			 pApp->WriteProfileString("Farbe","Sekundenzeiger",m_fskzgfb);
			 pApp->WriteProfileString("Farbe","Sekundenzahl",m_fskzlfb);
			 pApp->WriteProfileInt("Darstellung","Uhr",m_ch_uhr);
			 pApp->WriteProfileInt("Darstellung","Stundenzeiger",m_ch_st);
			 pApp->WriteProfileInt("Darstellung","Minutenzeiger",m_ch_m);
	         pApp->WriteProfileInt("Darstellung","Sekundenzeiger",m_ch_sk);
	
	CDialog::OnOK();
}

//-----------------------------------------------------------| ereignisse CUHRwinEinst

void UHRwinEinst::OnCHECKuhr() //uhrkörper
{
	UpdateData(1);
	
	if(m_ch_uhr==1) m_uhr = "EIN";
	if(m_ch_uhr==0) m_uhr = "AUS";

	CUHRwinDlg o;
			   o.uhr_( m_ch_uhr );
	
	UpdateData(0);
}

void UHRwinEinst::OnCHECKstzg()  //stundenzeiger
{
	UpdateData(1);
	
	if(m_ch_st==1) m_stzg = "EIN";
	if(m_ch_st==0) m_stzg = "AUS";
	
	CUHRwinDlg o;
			   o.stzg_( m_ch_st );
	
	UpdateData(0);	
}

void UHRwinEinst::OnCHECKskzg() //minutenzeiger
{
	UpdateData(1);
	
	if(m_ch_sk==1) m_skzg = "EIN";
	if(m_ch_sk==0) m_skzg = "AUS";

	CUHRwinDlg o;
		       o.skzg_( m_ch_sk );
	
	UpdateData(0);
}

void UHRwinEinst::OnCHECKmnzg() //sekundenzeiger
{
	UpdateData(1);
	
	if(m_ch_m==1) m_mnzg = "EIN";
	if(m_ch_m==0) m_mnzg = "AUS";

	CUHRwinDlg o;
		       o.mnzg_( m_ch_m );
	
	UpdateData(0);
}

void UHRwinEinst::OnSelchangeCOMBOfhg()    {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfmzgfb() {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfmzlf()  {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfskzgfb(){UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfskzlfb(){UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfszgfb() {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfszlfb() {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfuhg()   {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfurm()   {UpdateData(1);UpdateData(0); RedrawWindow();}
void UHRwinEinst::OnSelchangeCOMBOfin()    {UpdateData(1);UpdateData(0); RedrawWindow();} 

