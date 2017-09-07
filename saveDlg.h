#if !defined(AFX_SAVEDLG_H__3ED51962_3385_423E_A7C0_C9DB124FEC44__INCLUDED_)
#define AFX_SAVEDLG_H__3ED51962_3385_423E_A7C0_C9DB124FEC44__INCLUDED_

#include "bookRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// saveDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CsaveDlg dialog

class CsaveDlg : public CDialog
{
// Construction
public:
	CsaveDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CsaveDlg)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CsaveDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CsaveDlg)
	afx_msg void OnSingle();
	afx_msg void OnMany();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CbookRS Insbook;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SAVEDLG_H__3ED51962_3385_423E_A7C0_C9DB124FEC44__INCLUDED_)
