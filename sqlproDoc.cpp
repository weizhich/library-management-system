// sqlproDoc.cpp : implementation of the CSqlproDoc class
//

#include "stdafx.h"
#include "sqlpro.h"

#include "sqlproDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSqlproDoc

IMPLEMENT_DYNCREATE(CSqlproDoc, CDocument)

BEGIN_MESSAGE_MAP(CSqlproDoc, CDocument)
	//{{AFX_MSG_MAP(CSqlproDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSqlproDoc construction/destruction

CSqlproDoc::CSqlproDoc()
{
	// TODO: add one-time construction code here

}

CSqlproDoc::~CSqlproDoc()
{
}

BOOL CSqlproDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSqlproDoc serialization

void CSqlproDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSqlproDoc diagnostics

#ifdef _DEBUG
void CSqlproDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSqlproDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSqlproDoc commands
