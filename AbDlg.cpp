// AbDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "AbDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAbDlg dialog


CAbDlg::CAbDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAbDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAbDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CAbDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAbDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CAbDlg, CDialog)
	//{{AFX_MSG_MAP(CAbDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAbDlg message handlers
