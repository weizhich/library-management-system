#if !defined(AFX_BOOKRS_H__2DCEE31A_BD31_4650_A474_440D66A9300A__INCLUDED_)
#define AFX_BOOKRS_H__2DCEE31A_BD31_4650_A474_440D66A9300A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// bookRS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CbookRS recordset

class CbookRS : public CRecordset
{
public:
	CbookRS(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CbookRS)

// Field/Param Data
	//{{AFX_FIELD(CbookRS, CRecordset)
	CString	m_bno;
	CString	m_category;
	CString	m_name;
	CString	m_press;
	long	m_year;
	CString	m_author;
	double	m_price;
	long	m_total;
	long	m_stack;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CbookRS)
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

#endif // !defined(AFX_BOOKRS_H__2DCEE31A_BD31_4650_A474_440D66A9300A__INCLUDED_)
