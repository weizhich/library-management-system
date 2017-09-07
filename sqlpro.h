// sqlpro.h : main header file for the SQLPRO application
//

#if !defined(AFX_SQLPRO_H__98EF5A72_201F_47E4_8AFE_68F63F6657DF__INCLUDED_)
#define AFX_SQLPRO_H__98EF5A72_201F_47E4_8AFE_68F63F6657DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSqlproApp:
// See sqlpro.cpp for the implementation of this class
//


class CSqlproApp : public CWinApp
{
public:
	CSqlproApp();
	

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSqlproApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSqlproApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQLPRO_H__98EF5A72_201F_47E4_8AFE_68F63F6657DF__INCLUDED_)
