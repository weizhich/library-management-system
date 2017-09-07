#if !defined(AFX_FDLG_H__2D4487B1_D19B_4AFE_B63C_FAE438D365F4__INCLUDED_)
#define AFX_FDLG_H__2D4487B1_D19B_4AFE_B63C_FAE438D365F4__INCLUDED_

#include "bookRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// FDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CFDlg dialog

class CFDlg : public CDialog
{
// Construction
public:
	CFDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CFDlg)
	enum { IDD = IDD_DIALOG5 };
	CString	m_fauthor;
	CString	m_fcategory;
	CString	m_fname;
	CString	m_fpress;
	float	m_fpriceh;
	float	m_fpricel;
	int		m_fyearh;
	int		m_fyearl;
	int		m_ford;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CFDlg)
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void Onclear();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CbookRS book;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FDLG_H__2D4487B1_D19B_4AFE_B63C_FAE438D365F4__INCLUDED_)
