// lastRS.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "lastRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ClastRS

IMPLEMENT_DYNAMIC(ClastRS, CRecordset)

ClastRS::ClastRS(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(ClastRS)
	m_book_bno = _T("");
	m_category = _T("");
	m_name = _T("");
	m_press = _T("");
	m_year = 0;
	m_author = _T("");
	m_price = _T("");
	m_total = 0;
	m_stack = 0;
	m_cno = _T("");
	m_data_bno = _T("");
	m_bdate = _T("");
	m_rdate = _T("");
	m_id = _T("");
	m_nFields = 14;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString ClastRS::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString ClastRS::GetDefaultSQL()
{
	return _T("[dbo].[book],[dbo].[data]");
}

void ClastRS::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(ClastRS)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[dbo].[book].[bno]"), m_book_bno);
	RFX_Text(pFX, _T("[category]"), m_category);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[press]"), m_press);
	RFX_Long(pFX, _T("[year]"), m_year);
	RFX_Text(pFX, _T("[author]"), m_author);
	RFX_Text(pFX, _T("[price]"), m_price);
	RFX_Long(pFX, _T("[total]"), m_total);
	RFX_Long(pFX, _T("[stack]"), m_stack);
	RFX_Text(pFX, _T("[cno]"), m_cno);
	RFX_Text(pFX, _T("[dbo].[data].[bno]"), m_data_bno);
	RFX_Text(pFX, _T("[bdate]"), m_bdate);
	RFX_Text(pFX, _T("[rdate]"), m_rdate);
	RFX_Text(pFX, _T("[id]"), m_id);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// ClastRS diagnostics

#ifdef _DEBUG
void ClastRS::AssertValid() const
{
	CRecordset::AssertValid();
}

void ClastRS::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
