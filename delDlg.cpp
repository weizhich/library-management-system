// delDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "delDlg.h"
#include "workerRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CdelDlg dialog


CdelDlg::CdelDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CdelDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CdelDlg)
	m_did = _T("");
	//}}AFX_DATA_INIT
}


void CdelDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CdelDlg)
	DDX_Text(pDX, IDC_did, m_did);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CdelDlg, CDialog)
	//{{AFX_MSG_MAP(CdelDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CdelDlg message handlers

void CdelDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);  
	CClientDC dc(this);
	worker.Open();
	worker.m_strFilter.Format("id=%s",m_did);  
					//相当于select * from student where sid='3090300'
	worker.Requery();
	worker.Delete();

	worker.Close();
	MessageBox("删除成功!");
	CDialog::OnOK();
}
