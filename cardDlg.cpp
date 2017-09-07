// cardDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "cardDlg.h"
#include "addDlg.h"
#include "delDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CcardDlg dialog


CcardDlg::CcardDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CcardDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CcardDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CcardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CcardDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CcardDlg, CDialog)
	//{{AFX_MSG_MAP(CcardDlg)
	ON_BN_CLICKED(ID_ADD, OnAdd)
	ON_BN_CLICKED(ID_DEL, OnDel)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CcardDlg message handlers

void CcardDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
	CaddDlg insstu;
	insstu.DoModal();
}

void CcardDlg::OnDel() 
{
	// TODO: Add your control notification handler code here
	CdelDlg insstu;
	insstu.DoModal();
}
