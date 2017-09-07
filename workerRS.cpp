// workerRS.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "workerRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CworkerRS

IMPLEMENT_DYNAMIC(CworkerRS, CRecordset)

CworkerRS::CworkerRS(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CworkerRS)
	m_id = _T("");
	m_password = _T("");
	m_name = _T("");
	m_phone = _T("");
	m_nFields = 4;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CworkerRS::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CworkerRS::GetDefaultSQL()
{
	return _T("[dbo].[worker]");
}

void CworkerRS::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CworkerRS)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[password]"), m_password);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[phone]"), m_phone);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CworkerRS diagnostics

#ifdef _DEBUG
void CworkerRS::AssertValid() const
{
	CRecordset::AssertValid();
}

void CworkerRS::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
