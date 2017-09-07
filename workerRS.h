#if !defined(AFX_WORKERRS_H__409B00B9_1B35_4C0C_92FA_405B6BC9AE59__INCLUDED_)
#define AFX_WORKERRS_H__409B00B9_1B35_4C0C_92FA_405B6BC9AE59__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// workerRS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CworkerRS recordset

class CworkerRS : public CRecordset
{
public:
	CworkerRS(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CworkerRS)

// Field/Param Data
	//{{AFX_FIELD(CworkerRS, CRecordset)
	CString	m_id;
	CString	m_password;
	CString	m_name;
	CString	m_phone;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CworkerRS)
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

#endif // !defined(AFX_WORKERRS_H__409B00B9_1B35_4C0C_92FA_405B6BC9AE59__INCLUDED_)
