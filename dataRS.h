#if !defined(AFX_DATARS_H__784BDD94_3905_4141_BD89_772EBE047EEF__INCLUDED_)
#define AFX_DATARS_H__784BDD94_3905_4141_BD89_772EBE047EEF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dataRS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CdataRS recordset

class CdataRS : public CRecordset
{
public:
	CdataRS(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CdataRS)

// Field/Param Data
	//{{AFX_FIELD(CdataRS, CRecordset)
	CString	m_cno;
	CString	m_bno;
	CString	m_bdate;
	CString	m_rdate;
	CString	m_id;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CdataRS)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DATARS_H__784BDD94_3905_4141_BD89_772EBE047EEF__INCLUDED_)
