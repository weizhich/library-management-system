// logDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "logDlg.h"
#include "workerRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ClogDlg dialog


ClogDlg::ClogDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ClogDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ClogDlg)
	m_wid = _T("");
	m_wpassword = _T("");
	//}}AFX_DATA_INIT
}


void ClogDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ClogDlg)
	DDX_Text(pDX, IDC_wid, m_wid);
	DDX_Text(pDX, IDC_wpassword, m_wpassword);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ClogDlg, CDialog)
	//{{AFX_MSG_MAP(ClogDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ClogDlg message handlers

void ClogDlg::OnOK() 
{
	// TODO: Add extra validation here
	CDialog::OnOK();
	UpdateData(TRUE);

	CClientDC dc(this);
	
	worker.Open();
	worker.m_strFilter.Format("id=%s and password=%s", m_wid, m_wpassword);  
					//选择与输入信息相符的记录
	worker.Requery();
	if (!worker.IsEOF()){	    //如果有信息
		MessageBox("登陆成功");
		aaa = 1;
	}
	else
		MessageBox("用户名/密码错误");
	worker.Close();
}
