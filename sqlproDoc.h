// sqlproDoc.h : interface of the CSqlproDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SQLPRODOC_H__7A3445BB_9B0F_48F8_BED8_F9D9AE5C3C43__INCLUDED_)
#define AFX_SQLPRODOC_H__7A3445BB_9B0F_48F8_BED8_F9D9AE5C3C43__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSqlproDoc : public CDocument
{
protected: // create from serialization only
	CSqlproDoc();
	DECLARE_DYNCREATE(CSqlproDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSqlproDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSqlproDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSqlproDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SQLPRODOC_H__7A3445BB_9B0F_48F8_BED8_F9D9AE5C3C43__INCLUDED_)
