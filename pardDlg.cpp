// pardDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "pardDlg.h"
#include "addcardDlg.h"
#include "delcardDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CpardDlg dialog


CpardDlg::CpardDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CpardDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CpardDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CpardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CpardDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CpardDlg, CDialog)
	//{{AFX_MSG_MAP(CpardDlg)
	ON_BN_CLICKED(ID_ADDcard, OnADDcard)
	ON_BN_CLICKED(ID_DELcard, OnDELcard)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CpardDlg message handlers

void CpardDlg::OnADDcard() 
{
	// TODO: Add your control notification handler code here
	CaddcardDlg insstu;
	insstu.DoModal();
}

void CpardDlg::OnDELcard() 
{
	// TODO: Add your control notification handler code here
	CdelcardDlg insstu;
	insstu.DoModal();
}
