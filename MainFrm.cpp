// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "sqlpro.h"

#include "MainFrm.h"
#include "logDlg.h"
#include "FDlg.h"
#include "cardDlg.h"
#include "saveDlg.h"
#include "pardDlg.h"
#include "lastDlg.h"
#include "AbDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_COMMAND(ID_LOGIN, OnLogin)
	ON_COMMAND(ID_SAVE, OnSave)
	ON_COMMAND(ID_FIND, OnFind)
	ON_COMMAND(ID_CARD, OnCard)
	ON_COMMAND(ID_PARD, OnPard)
	ON_COMMAND(ID_ABOUT, OnAbout)
	ON_COMMAND(ID_LOGOUT, OnLogout)
	ON_COMMAND(ID_LAST, OnLast)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnLogin() 
{
	// TODO: Add your command handler code here
	ClogDlg insstu;
	insstu.DoModal();
}

void CMainFrame::OnSave() 
{
	// TODO: Add your command handler code here
	CsaveDlg insstu;
	if(aaa == 0) MessageBox("非管理员不能操作!");
	else insstu.DoModal();
}

void CMainFrame::OnFind() 
{
	// TODO: Add your command handler code here
	CFDlg insstu;
	insstu.DoModal();
	
}

void CMainFrame::OnCard() 
{
	// TODO: Add your command handler code here
	CcardDlg insstu;
	if(aaa == 0) MessageBox("非管理员不能操作!");
	else insstu.DoModal();
	
}

void CMainFrame::OnPard() 
{
	// TODO: Add your command handler code here
	CpardDlg insstu;
	if(aaa == 0) MessageBox("非管理员不能操作!");
	else insstu.DoModal();
}

void CMainFrame::OnAbout() 
{
	// TODO: Add your command handler code here
	CAbDlg insstu;
	insstu.DoModal();
}

void CMainFrame::OnLogout() 
{
	// TODO: Add your command handler code here
	if(aaa == 1){
		aaa = 0;
		MessageBox("登出成功!");
	}else MessageBox("尚未登录!");
}

void CMainFrame::OnLast() 
{
	// TODO: Add your command handler code here
	ClastDlg insstu;
	if(aaa == 0) MessageBox("非管理员不能操作!");
	else insstu.DoModal();
}
