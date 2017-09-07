// FDlg.cpp : implementation file
//


#include "stdafx.h"
#include "sqlpro.h"
#include "FDlg.h"
#include "bookRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFDlg dialog


CFDlg::CFDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CFDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CFDlg)
	m_fauthor = _T("");
	m_fcategory = _T("");
	m_fname = _T("");
	m_fpress = _T("");
	m_fpriceh = 0.0f;
	m_fpricel = 0.0f;
	m_fyearh = 0;
	m_fyearl = 0;
	m_ford = 0;
	//}}AFX_DATA_INIT
}


void CFDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CFDlg)
	DDX_Text(pDX, IDC_fauthor, m_fauthor);
	DDX_Text(pDX, IDC_fcategory, m_fcategory);
	DDX_Text(pDX, IDC_fname, m_fname);
	DDX_Text(pDX, IDC_fpress, m_fpress);
	DDX_Text(pDX, IDC_fpriceh, m_fpriceh);
	DDX_Text(pDX, IDC_fpricel, m_fpricel);
	DDX_Text(pDX, IDC_fyearh, m_fyearh);
	DDX_Text(pDX, IDC_fyearl, m_fyearl);
	DDX_Text(pDX, IDC_ford, m_ford);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CFDlg, CDialog)
	//{{AFX_MSG_MAP(CFDlg)
	ON_BN_CLICKED(IDC_clear, Onclear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFDlg message handlers

void CFDlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE); 

	CClientDC dc(this);
	int aa = 0, bb = 0;
	char s[100];

	if(m_fauthor == "") m_fauthor = "%%";
	if(m_fcategory == "") m_fcategory = "%%";
	if(m_fname == "") m_fname = "%%";
	if(m_fpress == "") m_fpress = "%%";
	if(m_fpriceh == 0) m_fpriceh = 10000;
	if(m_fyearh == 0) m_fyearh = 10000;
	
	book.Open();
	//查询条件
	book.m_strFilter.Format("author like '%s' and category like '%s' and name like '%s' and press like '%s' and price >= %f and price <= %f and year >= %d and year <= %d",m_fauthor,m_fcategory,m_fname,m_fpress,m_fpricel,m_fpriceh,m_fyearl,m_fyearh); 
	//排序条件
	switch(m_ford){
	case 1:
		book.m_strSort="category";
		break;
	case 3:
		book.m_strSort="press";
		break;
	case 4:
		book.m_strSort="year";
		break;
	case 5:
		book.m_strSort="author";
		break;
	case 6:
		book.m_strSort="price";
		break;
	default:
		book.m_strSort="name";
		break;
	}
	book.Requery();
	
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
	while (!book.IsEOF()) {

		wsprintf (s, "%s", book.m_bno);
		dc.TextOut (650, aa, s);

		wsprintf (s, "%s", book.m_category);
		dc.TextOut(750, aa, s);

		wsprintf (s, "%s", book.m_name);
		dc.TextOut(850, aa, s);

		wsprintf (s, "%s", book.m_press);
		dc.TextOut(950, aa, s);

		wsprintf (s, "%d", book.m_year);
		dc.TextOut(1050, aa, s);

		wsprintf (s, "%s", book.m_author);
		dc.TextOut(1150, aa, s);

		sprintf (s, "%0.2f", book.m_price);
		dc.TextOut(1220, aa, s);

		wsprintf (s, "%d", book.m_total);
		dc.TextOut(1270, aa, s);

		wsprintf (s, "%d", book.m_stack);
		dc.TextOut(1320, aa, s);
		
		aa = aa+20;
		book.MoveNext();
	}
	sprintf(s,"查询完毕，共%d条记录。",(aa/20 - 1));
	dc.TextOut (650, aa, s);
	book.Close();
}

void CFDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CFDlg::Onclear() 
{
	// TODO: Add your control notification handler code here
	Invalidate ();
}
