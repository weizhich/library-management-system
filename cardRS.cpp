// cardRS.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "cardRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CcardRS

IMPLEMENT_DYNAMIC(CcardRS, CRecordset)

CcardRS::CcardRS(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CcardRS)
	m_cno = _T("");
	m_name = _T("");
	m_place = _T("");
	m_category = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CcardRS::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CcardRS::GetDefaultSQL()
{
	return _T("[dbo].[card]");
}

void CcardRS::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CcardRS)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[cno]"), m_cno);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[place]"), m_place);
	RFX_Text(pFX, _T("[category]"), m_category);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CcardRS diagnostics

#ifdef _DEBUG
void CcardRS::AssertValid() const
{
	CRecordset::AssertValid();
}

void CcardRS::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
