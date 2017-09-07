#if !defined(AFX_ADDCARDDLG_H__C09226B1_76C6_46F0_ADA3_346A3A6F6BB2__INCLUDED_)
#define AFX_ADDCARDDLG_H__C09226B1_76C6_46F0_ADA3_346A3A6F6BB2__INCLUDED_

#include "cardRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// addcardDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CaddcardDlg dialog

class CaddcardDlg : public CDialog
{
// Construction
public:
	CaddcardDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CaddcardDlg)
	enum { IDD = IDD_DIALOG9 };
	CString	m_cdanwei;
	CString	m_cid;
	CString	m_cleibie;
	CString	m_cname;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CaddcardDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CaddcardDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CcardRS card;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDCARDDLG_H__C09226B1_76C6_46F0_ADA3_346A3A6F6BB2__INCLUDED_)
