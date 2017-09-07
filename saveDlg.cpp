// saveDlg.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "saveDlg.h"
#include "singleDlg.h"
#include "bookRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CsaveDlg dialog


CsaveDlg::CsaveDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CsaveDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CsaveDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CsaveDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CsaveDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CsaveDlg, CDialog)
	//{{AFX_MSG_MAP(CsaveDlg)
	ON_BN_CLICKED(IDSINGLE, OnSingle)
	ON_BN_CLICKED(IDMANY, OnMany)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CsaveDlg message handlers

void CsaveDlg::OnSingle() 
{
	// TODO: Add your control notification handler code here
	

	CsingleDlg insstu;
	insstu.DoModal();
	
}

void CsaveDlg::OnMany() 
{
	// TODO: Add your control notification handler code here
	char rbno[100], rauthor[100], rcategory[100], rpress[100], rname[100];
	int ryear, rnumber;
	float rprice;

	int i, y = 10;
	char s1[100], s2[100], s3[100];
	char ch;
	CClientDC dc(this);

	CFile file;
	file.Open("F:\\sql.txt",CFile::modeRead);
	Insbook.Open();

	while(file.GetPosition() < file.GetLength()){
		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			rbno[i++] = ch;
			file.Read(&ch, 1);
		}
		rbno[i] = '\0';

		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			rcategory[i++] = ch;
			file.Read(&ch, 1);
		}
		rcategory[i] = '\0';

		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			rname[i++] = ch;
			file.Read(&ch, 1);
		}
		rname[i] = '\0';

		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			rpress[i++] = ch;
			file.Read(&ch, 1);
		}
		rpress[i] = '\0';

		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			s1[i++] = ch;
			file.Read(&ch, 1);
		}
		s1[i] = '\0';
		ryear = atoi(s1);

		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			rauthor[i++] = ch;
			file.Read(&ch, 1);
		}
		rauthor[i] = '\0';

		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ','){
			s2[i++] = ch;
			file.Read(&ch, 1);
		}
		s2[i] = '\0';
		rprice = atof(s2);
		
		file.Read(&ch, 1);
		i = 0;
		file.Read(&ch, 1);
		while(ch != ' '){
			s3[i++] = ch;
			file.Read(&ch, 1);
		}
		s3[i] = '\0';
		rnumber = atoi(s3);
		file.Read(&ch, 1);
		file.Read(&ch, 1);
		
		Insbook.AddNew();

		Insbook.m_author = rauthor;
		Insbook.m_bno = rbno;
		Insbook.m_category = rcategory;
		Insbook.m_name = rname;
		Insbook.m_press = rpress;
		Insbook.m_price = rprice;
		Insbook.m_stack = rnumber;
		Insbook.m_total = rnumber;
		Insbook.m_year = ryear;

		Insbook.Update();
		
	}
	MessageBox ("²åÈë³É¹¦£¡");
	file.Close;
}
