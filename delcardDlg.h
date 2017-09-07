#if !defined(AFX_DELCARDDLG_H__ED34224B_035A_4ADC_9D9A_690859E0B88A__INCLUDED_)
#define AFX_DELCARDDLG_H__ED34224B_035A_4ADC_9D9A_690859E0B88A__INCLUDED_

#include "cardRS.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// delcardDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CdelcardDlg dialog

class CdelcardDlg : public CDialog
{
// Construction
public:
	CdelcardDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CdelcardDlg)
	enum { IDD = IDD_DIALOG10 };
	CString	m_cid;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CdelcardDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CdelcardDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CcardRS card;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DELCARDDLG_H__ED34224B_035A_4ADC_9D9A_690859E0B88A__INCLUDED_)
