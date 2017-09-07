#if !defined(AFX_PARDDLG_H__F884B9E6_9B7E_4F67_A536_DFF63057A155__INCLUDED_)
#define AFX_PARDDLG_H__F884B9E6_9B7E_4F67_A536_DFF63057A155__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// pardDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CpardDlg dialog

class CpardDlg : public CDialog
{
// Construction
public:
	CpardDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CpardDlg)
	enum { IDD = IDD_DIALOG8 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CpardDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CpardDlg)
	afx_msg void OnADDcard();
	afx_msg void OnDELcard();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PARDDLG_H__F884B9E6_9B7E_4F67_A536_DFF63057A155__INCLUDED_)
