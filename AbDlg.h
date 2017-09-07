#if !defined(AFX_ABDLG_H__45E71F01_3A7B_4B6B_93AC_B991599D4023__INCLUDED_)
#define AFX_ABDLG_H__45E71F01_3A7B_4B6B_93AC_B991599D4023__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// AbDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CAbDlg dialog

class CAbDlg : public CDialog
{
// Construction
public:
	CAbDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CAbDlg)
	enum { IDD = IDD_DIALOG11 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAbDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CAbDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABDLG_H__45E71F01_3A7B_4B6B_93AC_B991599D4023__INCLUDED_)
