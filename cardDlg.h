#if !defined(AFX_CARDDLG_H__EB362B0E_382A_4448_95C7_6A9CC0145A38__INCLUDED_)
#define AFX_CARDDLG_H__EB362B0E_382A_4448_95C7_6A9CC0145A38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// cardDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CcardDlg dialog

class CcardDlg : public CDialog
{
// Construction
public:
	CcardDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CcardDlg)
	enum { IDD = IDD_DIALOG4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CcardDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CcardDlg)
	afx_msg void OnAdd();
	afx_msg void OnDel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CARDDLG_H__EB362B0E_382A_4448_95C7_6A9CC0145A38__INCLUDED_)
