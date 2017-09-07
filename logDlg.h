#if !defined(AFX_LOGDLG_H__48E42174_18B7_43E1_89E8_F83636E0DBDF__INCLUDED_)
#define AFX_LOGDLG_H__48E42174_18B7_43E1_89E8_F83636E0DBDF__INCLUDED_

#include "workerRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// logDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ClogDlg dialog

class ClogDlg : public CDialog
{
// Construction
public:
	ClogDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ClogDlg)
	enum { IDD = IDD_DIALOG1 };
	CString	m_wid;
	CString	m_wpassword;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ClogDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ClogDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CworkerRS worker;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGDLG_H__48E42174_18B7_43E1_89E8_F83636E0DBDF__INCLUDED_)
