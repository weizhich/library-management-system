#if !defined(AFX_LASTRS_H__6D641A7C_AC42_443B_AD75_991C33488817__INCLUDED_)
#define AFX_LASTRS_H__6D641A7C_AC42_443B_AD75_991C33488817__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// lastRS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ClastRS recordset

class ClastRS : public CRecordset
{
public:
	ClastRS(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(ClastRS)

// Field/Param Data
	//{{AFX_FIELD(ClastRS, CRecordset)
	CString	m_book_bno;
	CString	m_category;
	CString	m_name;
	CString	m_press;
	long	m_year;
	CString	m_author;
	CString	m_price;
	long	m_total;
	long	m_stack;
	CString	m_cno;
	CString	m_data_bno;
	CString	m_bdate;
	CString	m_rdate;
	CString	m_id;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ClastRS)
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

#endif // !defined(AFX_LASTRS_H__6D641A7C_AC42_443B_AD75_991C33488817__INCLUDED_)
