// bookRS.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "bookRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CbookRS

IMPLEMENT_DYNAMIC(CbookRS, CRecordset)

CbookRS::CbookRS(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CbookRS)
	m_bno = _T("");
	m_category = _T("");
	m_name = _T("");
	m_press = _T("");
	m_year = 0;
	m_author = _T("");
	m_price = 0.0;
	m_total = 0;
	m_stack = 0;
	m_nFields = 9;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CbookRS::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CbookRS::GetDefaultSQL()
{
	return _T("[dbo].[book]");
}

void CbookRS::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CbookRS)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[bno]"), m_bno);
	RFX_Text(pFX, _T("[category]"), m_category);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[press]"), m_press);
	RFX_Long(pFX, _T("[year]"), m_year);
	RFX_Text(pFX, _T("[author]"), m_author);
	RFX_Double(pFX, _T("[price]"), m_price);
	RFX_Long(pFX, _T("[total]"), m_total);
	RFX_Long(pFX, _T("[stack]"), m_stack);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CbookRS diagnostics

#ifdef _DEBUG
void CbookRS::AssertValid() const
{
	CRecordset::AssertValid();
}

void CbookRS::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
