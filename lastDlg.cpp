// lastDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "lastDlg.h"
#include "bookRS.h"
#include "dataRS.h"
#include "lastRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ClastDlg dialog


ClastDlg::ClastDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ClastDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ClastDlg)
	m_lbook = _T("");
	m_lcard = _T("");
	m_mid = _T("");
	m_brdate = _T("");
	m_rdate = _T("");
	//}}AFX_DATA_INIT
}


void ClastDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ClastDlg)
	DDX_Text(pDX, IDC_lbook, m_lbook);
	DDX_Text(pDX, IDC_lcard, m_lcard);
	DDX_Text(pDX, IDC_mid, m_mid);
	DDX_Text(pDX, IDC_brdate, m_brdate);
	DDX_Text(pDX, IDC_rdate, m_rdate);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ClastDlg, CDialog)
	//{{AFX_MSG_MAP(ClastDlg)
	ON_BN_CLICKED(IDC_chaxun, Onchaxun)
	ON_BN_CLICKED(IDC_cancel, Oncancel)
	ON_BN_CLICKED(IDC_borrow, Onborrow)
	ON_BN_CLICKED(IDC_return, Onreturn)
	ON_BN_CLICKED(IDC_dclear, Ondclear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ClastDlg message handlers

void ClastDlg::Onchaxun() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);  
	CClientDC dc(this);
	int aa = 0,bb = 0;;
	char s[100];
	last.Open();

	last.m_strFilter.Format("cno = %s and data.bno = book.bno", m_lcard);
	last.m_strSort="name";
	last.Requery();

	dc.TextOut(650, aa, "书号                          ");
	dc.TextOut(750, aa, "类别                          ");
	dc.TextOut(850, aa, "书名                          ");
	dc.TextOut(950, aa, "出版社                        ");
	dc.TextOut(1050, aa, "年份                         ");
	dc.TextOut(1150, aa, "作者                         ");
	dc.TextOut(1220, aa, "价格                         ");
	dc.TextOut(1270, aa, "总量                         ");
	dc.TextOut(1320, aa, "现存                         ");
	
	aa = aa + 20;
	while (!last.IsEOF()) {
		wsprintf (s, "%s", last.m_book_bno);
		dc.TextOut (650, aa, s);

		wsprintf (s, "%s", last.m_category);
		dc.TextOut(750, aa, s);

		wsprintf (s, "%s", last.m_name);
		dc.TextOut(850, aa, s);

		wsprintf (s, "%s", last.m_press);
		dc.TextOut(950, aa, s);

		wsprintf (s, "%d", last.m_year);
		dc.TextOut(1050, aa, s);

		wsprintf (s, "%s", last.m_author);
		dc.TextOut(1150, aa, s);

		wsprintf (s, "%s", last.m_price);
		dc.TextOut(1220, aa, s);

		wsprintf (s, "%d", last.m_total);
		dc.TextOut(1270, aa, s);

		wsprintf (s, "%d", last.m_stack);
		dc.TextOut(1320, aa, s);
		
		aa = aa+20;
		last.MoveNext();
	}
	sprintf(s,"查询完毕，共%d条记录。",(aa/20 - 1));
	dc.TextOut (650, aa, s);
	last.Close();
}

void ClastDlg::Oncancel() 
{
	// TODO: Add your control notification handler code here
	
}

void ClastDlg::Onborrow() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);  
	CClientDC dc(this);
	book.Open();

	book.m_strFilter.Format("bno = %s", m_lbook);
	book.Requery();
	if(book.m_stack > 0){
		book.Edit();
		book.m_stack = book.m_stack - 1;
		book.Update();
		
		data.Open();
		data.AddNew();
		data.m_bno = m_lbook;
		data.m_cno = m_lcard;
		data.m_id = m_mid;
		data.m_bdate = m_brdate;
		data.m_rdate = m_rdate;

		data.Update();

		data.Close();
		MessageBox("借书成功");
	}else{
		MessageBox("无库存");
		data.Open();
		data.m_strFilter.Format("bno = %s", m_lbook);
		data.m_strSort="rdate";
		data.Requery();

		MessageBox("最近还书日期为:");
		MessageBox(data.m_rdate);
		
		data.Close();
	}

	book.Close();
}

void ClastDlg::Onreturn() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);  
	CClientDC dc(this);
	data.Open();
	data.m_strFilter.Format("bno = %s and cno = %s", m_lbook, m_lcard);
	data.Requery();
	if (!data.IsEOF()) {
		MessageBox("还书成功!");
		data.Delete();

		book.Open();
		book.m_strFilter.Format("bno = %s", m_lbook);
		book.Requery();
		
		book.Edit();
		book.m_stack = book.m_stack + 1;
		book.Update();

		book.Close();
	}else MessageBox("错误,请核查书号和卡号!");

	data.Close();
}

void ClastDlg::Ondclear() 
{
	// TODO: Add your control notification handler code here
	Invalidate ();
}
