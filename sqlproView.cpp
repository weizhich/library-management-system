// sqlproView.cpp : implementation of the CSqlproView class
//

#include "stdafx.h"
#include "sqlpro.h"

#include "sqlproDoc.h"
#include "sqlproView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSqlproView

IMPLEMENT_DYNCREATE(CSqlproView, CView)

BEGIN_MESSAGE_MAP(CSqlproView, CView)
	//{{AFX_MSG_MAP(CSqlproView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSqlproView construction/destruction

CSqlproView::CSqlproView()
{
	// TODO: add construction code here

}

CSqlproView::~CSqlproView()
{
}

BOOL CSqlproView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSqlproView drawing

void CSqlproView::OnDraw(CDC* pDC)
{
	CSqlproDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CSqlproView diagnostics

#ifdef _DEBUG
void CSqlproView::AssertValid() const
{
	CView::AssertValid();
}

void CSqlproView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSqlproDoc* CSqlproView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSqlproDoc)));
	return (CSqlproDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSqlproView message handlers
