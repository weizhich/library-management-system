#if !defined(AFX_CARDRS_H__18C0DBC1_9195_417A_8E1E_4C241E81EFC4__INCLUDED_)
#define AFX_CARDRS_H__18C0DBC1_9195_417A_8E1E_4C241E81EFC4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// cardRS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CcardRS recordset

class CcardRS : public CRecordset
{
public:
	CcardRS(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CcardRS)

// Field/Param Data
	//{{AFX_FIELD(CcardRS, CRecordset)
	CString	m_cno;
	CString	m_name;
	CString	m_place;
	CString	m_category;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CcardRS)
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

#endif // !defined(AFX_CARDRS_H__18C0DBC1_9195_417A_8E1E_4C241E81EFC4__INCLUDED_)
