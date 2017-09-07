#if !defined(AFX_FINDDLG_H__D35B8172_3C74_4347_B59C_8DB5CF73BAD9__INCLUDED_)
#define AFX_FINDDLG_H__D35B8172_3C74_4347_B59C_8DB5CF73BAD9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// findDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CfindDlg dialog

class CfindDlg : public CDialog
{
// Construction
public:
	CfindDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CfindDlg)
	enum { IDD = IDD_DIALOG4 };
	CString	m_fauthor;
	CString	m_fcategory;
	CString	m_fname;
	CString	m_fpress;
	float	m_fpriceh;
	float	m_fpricel;
	int		m_fyearh;
	int		m_fyearl;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CfindDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CfindDlg)
	afx_msg void OnAdd();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINDDLG_H__D35B8172_3C74_4347_B59C_8DB5CF73BAD9__INCLUDED_)
