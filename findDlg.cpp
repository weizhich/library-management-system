// findDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "findDlg.h"
#include "addDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CfindDlg dialog


CfindDlg::CfindDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CfindDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CfindDlg)
	m_fauthor = _T("");
	m_fcategory = _T("");
	m_fname = _T("");
	m_fpress = _T("");
	m_fpriceh = 0.0f;
	m_fpricel = 0.0f;
	m_fyearh = 0;
	m_fyearl = 0;
	//}}AFX_DATA_INIT
}


void CfindDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CfindDlg)
	DDX_Text(pDX, IDC_fauthor, m_fauthor);
	DDX_Text(pDX, IDC_fcategory, m_fcategory);
	DDX_Text(pDX, IDC_fname, m_fname);
	DDX_Text(pDX, IDC_fpress, m_fpress);
	DDX_Text(pDX, IDC_fpriceh, m_fpriceh);
	DDX_Text(pDX, IDC_fpricel, m_fpricel);
	DDX_Text(pDX, IDC_fyearh, m_fyearh);
	DDX_Text(pDX, IDC_fyearl, m_fyearl);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CfindDlg, CDialog)
	//{{AFX_MSG_MAP(CfindDlg)
	ON_BN_CLICKED(ID_ADD, OnAdd)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CfindDlg message handlers

void CfindDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
	CaddDlg insstu;
	insstu.DoModal();
	
}
