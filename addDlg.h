#if !defined(AFX_ADDDLG_H__DCBBA490_7EF0_4FB3_821A_38591F8A3BB5__INCLUDED_)
#define AFX_ADDDLG_H__DCBBA490_7EF0_4FB3_821A_38591F8A3BB5__INCLUDED_

#include "workerRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// addDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CaddDlg dialog

class CaddDlg : public CDialog
{
// Construction
public:
	CaddDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CaddDlg)
	enum { IDD = IDD_DIALOG6 };
	CString	m_rid;
	CString	m_rname;
	CString	m_rpas;
	CString	m_rpass;
	CString	m_rphone;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CaddDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CaddDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CworkerRS work;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ADDDLG_H__DCBBA490_7EF0_4FB3_821A_38591F8A3BB5__INCLUDED_)
