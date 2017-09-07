// singleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "singleDlg.h"
#include "bookRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CsingleDlg dialog


CsingleDlg::CsingleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CsingleDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CsingleDlg)
	m_wauthor = _T("");
	m_wbno = _T("");
	m_wcategory = _T("");
	m_wname = _T("");
	m_wnumber = 0;
	m_press = _T("");
	m_wprice = 0.0f;
	m_wyear = 0;
	//}}AFX_DATA_INIT
}


void CsingleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CsingleDlg)
	DDX_Text(pDX, IDC_wauthor, m_wauthor);
	DDX_Text(pDX, IDC_wbno, m_wbno);
	DDX_Text(pDX, IDC_wcategory, m_wcategory);
	DDX_Text(pDX, IDC_wname, m_wname);
	DDX_Text(pDX, IDC_wnumber, m_wnumber);
	DDX_Text(pDX, IDC_wpress, m_press);
	DDX_Text(pDX, IDC_wprice, m_wprice);
	DDX_Text(pDX, IDC_wyear, m_wyear);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CsingleDlg, CDialog)
	//{{AFX_MSG_MAP(CsingleDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CsingleDlg message handlers

void CsingleDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	UpdateData(TRUE);  

	book.Open();
	book.AddNew();
	book.m_bno = m_wbno;
	book.m_category = m_wcategory;
	book.m_name = m_wname;
	book.m_press = m_press;
	book.m_year = m_wyear;
	book.m_author = m_wauthor;
	book.m_price = m_wprice;
	book.m_total = m_wnumber;
	book.m_stack = m_wnumber;
	book.Update();
	MessageBox ("≤Â»Î≥…π¶£°");
	CDialog::OnOK();
}
