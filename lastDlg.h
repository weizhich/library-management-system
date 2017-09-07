#if !defined(AFX_LASTDLG_H__A33FAC62_FDC6_4027_9DB7_F4165CC89DDF__INCLUDED_)
#define AFX_LASTDLG_H__A33FAC62_FDC6_4027_9DB7_F4165CC89DDF__INCLUDED_

#include "lastRS.h"	// Added by ClassView
#include "bookRS.h"	// Added by ClassView
#include "dataRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// lastDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ClastDlg dialog

class ClastDlg : public CDialog
{
// Construction
public:
	ClastDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ClastDlg)
	enum { IDD = IDD_DIALOG12 };
	CString	m_lbook;
	CString	m_lcard;
	CString	m_mid;
	CString	m_brdate;
	CString	m_rdate;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ClastDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ClastDlg)
	afx_msg void Onchaxun();
	afx_msg void Oncancel();
	afx_msg void Onborrow();
	afx_msg void Onreturn();
	afx_msg void Ondclear();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CdataRS data;
	CbookRS book;
	ClastRS last;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LASTDLG_H__A33FAC62_FDC6_4027_9DB7_F4165CC89DDF__INCLUDED_)
