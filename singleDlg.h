#if !defined(AFX_SINGLEDLG_H__74DB2BF7_6785_47FD_9485_C57D24C5BCBE__INCLUDED_)
#define AFX_SINGLEDLG_H__74DB2BF7_6785_47FD_9485_C57D24C5BCBE__INCLUDED_

#include "bookRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// singleDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CsingleDlg dialog

class CsingleDlg : public CDialog
{
// Construction
public:
	CsingleDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CsingleDlg)
	enum { IDD = IDD_DIALOG3 };
	CString	m_wauthor;
	CString	m_wbno;
	CString	m_wcategory;
	CString	m_wname;
	int		m_wnumber;
	CString	m_press;
	float	m_wprice;
	int		m_wyear;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CsingleDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CsingleDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CbookRS book;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SINGLEDLG_H__74DB2BF7_6785_47FD_9485_C57D24C5BCBE__INCLUDED_)
