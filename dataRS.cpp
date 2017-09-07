// dataRS.cpp : implementation file
//

#include "stdafx.h"
#include "sqlpro.h"
#include "dataRS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CdataRS

IMPLEMENT_DYNAMIC(CdataRS, CRecordset)

CdataRS::CdataRS(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CdataRS)
	m_cno = _T("");
	m_bno = _T("");
	m_bdate = _T("");
	m_rdate = _T("");
	m_id = _T("");
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CdataRS::GetDefaultConnect()
{
	return _T("ODBC;DSN=图书管理系统");
}

CString CdataRS::GetDefaultSQL()
{
	return _T("[dbo].[data]");
}

void CdataRS::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CdataRS)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[cno]"), m_cno);
	RFX_Text(pFX, _T("[bno]"), m_bno);
	RFX_Text(pFX, _T("[bdate]"), m_bdate);
	RFX_Text(pFX, _T("[rdate]"), m_rdate);
	RFX_Text(pFX, _T("[id]"), m_id);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CdataRS diagnostics

#ifdef _DEBUG
void CdataRS::AssertValid() const
{
	CRecordset::AssertValid();
}

void CdataRS::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
