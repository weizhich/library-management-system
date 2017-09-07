// delcardDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "delcardDlg.h"
#include "cardRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CdelcardDlg dialog


CdelcardDlg::CdelcardDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CdelcardDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CdelcardDlg)
	m_cid = _T("");
	//}}AFX_DATA_INIT
}


void CdelcardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CdelcardDlg)
	DDX_Text(pDX, IDC_cid, m_cid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CdelcardDlg, CDialog)
	//{{AFX_MSG_MAP(CdelcardDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CdelcardDlg message handlers

void CdelcardDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);  
	CClientDC dc(this);
	card.Open();
	card.m_strFilter.Format("cno=%s",m_cid);  
					//相当于select * from student where sid='3090300'
	card.Requery();
	card.Delete();

	card.Close();
	MessageBox("删除成功!");
	CDialog::OnOK();
}
