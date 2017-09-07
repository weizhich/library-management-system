// addcardDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "addcardDlg.h"
#include "cardRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CaddcardDlg dialog


CaddcardDlg::CaddcardDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CaddcardDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CaddcardDlg)
	m_cdanwei = _T("");
	m_cid = _T("");
	m_cleibie = _T("");
	m_cname = _T("");
	//}}AFX_DATA_INIT
}


void CaddcardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CaddcardDlg)
	DDX_Text(pDX, IDC_cdanwei, m_cdanwei);
	DDX_Text(pDX, IDC_cid, m_cid);
	DDX_Text(pDX, IDC_cleibie, m_cleibie);
	DDX_Text(pDX, IDC_cname, m_cname);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CaddcardDlg, CDialog)
	//{{AFX_MSG_MAP(CaddcardDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CaddcardDlg message handlers

void CaddcardDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);  
	card.Open();
	
	card.AddNew();
	card.m_cno = m_cid;
	card.m_name = m_cname;
	card.m_category = m_cleibie;
	card.m_place = m_cdanwei;
	card.Update();

	MessageBox ("≤Â»Î≥…π¶£°");
	CDialog::OnOK();
}
