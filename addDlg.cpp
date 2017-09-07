// addDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "addDlg.h"
#include "workerRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CaddDlg dialog


CaddDlg::CaddDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CaddDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CaddDlg)
	m_rid = _T("");
	m_rname = _T("");
	m_rpas = _T("");
	m_rpass = _T("");
	m_rphone = _T("");
	//}}AFX_DATA_INIT
}


void CaddDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CaddDlg)
	DDX_Text(pDX, IDC_rid, m_rid);
	DDX_Text(pDX, IDC_rname, m_rname);
	DDX_Text(pDX, IDC_rpas, m_rpas);
	DDX_Text(pDX, IDC_rpass, m_rpass);
	DDX_Text(pDX, IDC_rphone, m_rphone);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CaddDlg, CDialog)
	//{{AFX_MSG_MAP(CaddDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CaddDlg message handlers

void CaddDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);  
	work.Open();
	
	if(m_rpas != m_rpass) 	MessageBox ("请重新确认密码!");
	else{

		work.AddNew();
		work.m_id = m_rid;
		work.m_name = m_rname;
		work.m_password = m_rpas;
		work.m_phone = m_rphone;
		work.Update();
		MessageBox ("插入成功！");
	}
	CDialog::OnOK();
	
	
}
