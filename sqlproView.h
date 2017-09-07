// sqlproView.h : interface of the CSqlproView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SQLPROVIEW_H__A7898868_6D38_40FA_BAC3_155492176B53__INCLUDED_)
#define AFX_SQLPROVIEW_H__A7898868_6D38_40FA_BAC3_155492176B53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSqlproView : public CView
{
protected: // create from serialization only
	CSqlproView();
	DECLARE_DYNCREATE(CSqlproView)

// Attributes
public:
	CSqlproDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSqlproView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSqlproView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSqlproView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in sqlproView.cpp
inline CSqlproDoc* CSqlproView::GetDocument()
   { return (CSqlproDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQLPROVIEW_H__A7898868_6D38_40FA_BAC3_155492176B53__INCLUDED_)
