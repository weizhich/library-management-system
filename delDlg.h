#if !defined(AFX_DELDLG_H__6049F3DA_81D6_4E23_B8E4_3991E5876764__INCLUDED_)
#define AFX_DELDLG_H__6049F3DA_81D6_4E23_B8E4_3991E5876764__INCLUDED_

#include "workerRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// delDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CdelDlg dialog

class CdelDlg : public CDialog
{
// Construction
public:
	CdelDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CdelDlg)
	enum { IDD = IDD_DIALOG7 };
	CString	m_did;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CdelDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CdelDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CworkerRS worker;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELDLG_H__6049F3DA_81D6_4E23_B8E4_3991E5876764__INCLUDED_)
