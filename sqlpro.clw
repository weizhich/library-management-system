; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMainFrame
LastTemplate=CRecordset
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "sqlpro.h"
LastPage=0

ClassCount=23
Class1=CSqlproApp
Class2=CSqlproDoc
Class3=CSqlproView
Class4=CMainFrame

ResourceCount=14
Resource1=IDD_DIALOG4
Resource2=IDD_DIALOG2
Class5=CAboutDlg
Class6=CworkerRS
Class7=ClogDlg
Resource3=IDR_MAINFRAME
Class8=CsaveDlg
Resource4=IDD_ABOUTBOX
Class9=CsingleDlg
Class10=CbookRS
Resource5=IDD_DIALOG6
Class11=CfindDlg
Class12=CFDlg
Resource6=IDD_DIALOG9
Class13=CcardDlg
Resource7=IDD_DIALOG8
Class14=CaddDlg
Resource8=IDD_DIALOG10
Class15=CdelDlg
Resource9=IDD_DIALOG1
Class16=CpardDlg
Class17=CcardRS
Resource10=IDD_DIALOG11
Class18=CaddcardDlg
Resource11=IDD_DIALOG5
Class19=CdelcardDlg
Resource12=IDD_DIALOG7
Class20=CAbDlg
Resource13=IDD_DIALOG3
Class21=ClastRS
Class22=ClastDlg
Class23=CdataRS
Resource14=IDD_DIALOG12

[CLS:CSqlproApp]
Type=0
HeaderFile=sqlpro.h
ImplementationFile=sqlpro.cpp
Filter=N

[CLS:CSqlproDoc]
Type=0
HeaderFile=sqlproDoc.h
ImplementationFile=sqlproDoc.cpp
Filter=N

[CLS:CSqlproView]
Type=0
HeaderFile=sqlproView.h
ImplementationFile=sqlproView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=ID_SAVE




[CLS:CAboutDlg]
Type=0
HeaderFile=sqlpro.cpp
ImplementationFile=sqlpro.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_LOGIN
Command2=ID_LOGOUT
Command3=ID_SAVE
Command4=ID_FIND
Command5=ID_LAST
Command6=ID_CARD
Command7=ID_PARD
Command8=ID_ABOUT
CommandCount=8

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[CLS:CworkerRS]
Type=0
HeaderFile=workerRS.h
ImplementationFile=workerRS.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CworkerRS

[DB:CworkerRS]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[id], -8, 200
Column2=[password], -8, 200
Column3=[name], -8, 200
Column4=[phone], -8, 200

[DLG:IDD_DIALOG1]
Type=1
Class=ClogDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_wid,edit,1350631552
Control6=IDC_wpassword,edit,1350631552

[CLS:ClogDlg]
Type=0
HeaderFile=logDlg.h
ImplementationFile=logDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=ClogDlg

[DLG:IDD_DIALOG2]
Type=1
Class=CsaveDlg
ControlCount=3
Control1=IDSINGLE,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDMANY,button,1342242817

[CLS:CsaveDlg]
Type=0
HeaderFile=saveDlg.h
ImplementationFile=saveDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CsaveDlg

[DLG:IDD_DIALOG3]
Type=1
Class=CsingleDlg
ControlCount=19
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_wbno,edit,1350631552
Control13=IDC_wcategory,edit,1350631552
Control14=IDC_wname,edit,1350631552
Control15=IDC_wpress,edit,1350631552
Control16=IDC_wyear,edit,1350631552
Control17=IDC_wauthor,edit,1350631552
Control18=IDC_wprice,edit,1350631552
Control19=IDC_wnumber,edit,1350631552

[CLS:CsingleDlg]
Type=0
HeaderFile=singleDlg.h
ImplementationFile=singleDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CsingleDlg

[CLS:CbookRS]
Type=0
HeaderFile=bookRS.h
ImplementationFile=bookRS.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CbookRS

[DB:CbookRS]
DB=1
DBType=ODBC
ColumnCount=9
Column1=[bno], 1, 100
Column2=[category], 1, 100
Column3=[name], 1, 100
Column4=[press], 1, 100
Column5=[year], 4, 4
Column6=[author], 1, 100
Column7=[price], 6, 8
Column8=[total], 4, 4
Column9=[stack], 4, 4

[CLS:CfindDlg]
Type=0
HeaderFile=findDlg.h
ImplementationFile=findDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

[DLG:IDD_DIALOG5]
Type=1
Class=CFDlg
ControlCount=20
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_fcategory,edit,1350631552
Control11=IDC_fname,edit,1350631552
Control12=IDC_fpress,edit,1350631552
Control13=IDC_fauthor,edit,1350631552
Control14=IDC_fyearl,edit,1350631552
Control15=IDC_fyearh,edit,1350631552
Control16=IDC_fpricel,edit,1350631552
Control17=IDC_fpriceh,edit,1350631552
Control18=IDC_STATIC,static,1342308352
Control19=IDC_ford,edit,1350631552
Control20=IDC_clear,button,1342242816

[CLS:CFDlg]
Type=0
HeaderFile=FDlg.h
ImplementationFile=FDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CFDlg

[DLG:IDD_DIALOG4]
Type=1
Class=CcardDlg
ControlCount=4
Control1=ID_ADD,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_DEL,button,1342242817
Control4=IDC_STATIC,static,1342308352

[CLS:CcardDlg]
Type=0
HeaderFile=cardDlg.h
ImplementationFile=cardDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CcardDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG6]
Type=1
Class=CaddDlg
ControlCount=13
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_rid,edit,1350631552
Control10=IDC_rpas,edit,1350631552
Control11=IDC_rpass,edit,1350631552
Control12=IDC_rname,edit,1350631552
Control13=IDC_rphone,edit,1350631552

[CLS:CaddDlg]
Type=0
HeaderFile=addDlg.h
ImplementationFile=addDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CaddDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG7]
Type=1
Class=CdelDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_did,edit,1350631552

[CLS:CdelDlg]
Type=0
HeaderFile=delDlg.h
ImplementationFile=delDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CdelDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG8]
Type=1
Class=CpardDlg
ControlCount=4
Control1=ID_ADDcard,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=ID_DELcard,button,1342242817
Control4=IDC_STATIC,static,1342308352

[CLS:CpardDlg]
Type=0
HeaderFile=pardDlg.h
ImplementationFile=pardDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CpardDlg
VirtualFilter=dWC

[CLS:CcardRS]
Type=0
HeaderFile=cardRS.h
ImplementationFile=cardRS.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=CcardRS

[DB:CcardRS]
DB=1
DBType=ODBC
ColumnCount=4
Column1=[cno], -8, 200
Column2=[name], -8, 200
Column3=[place], -8, 200
Column4=[category], -8, 200

[DLG:IDD_DIALOG9]
Type=1
Class=CaddcardDlg
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_cid,edit,1350631552
Control9=IDC_cname,edit,1350631552
Control10=IDC_cdanwei,edit,1350631552
Control11=IDC_cleibie,edit,1350631552

[CLS:CaddcardDlg]
Type=0
HeaderFile=addcardDlg.h
ImplementationFile=addcardDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CaddcardDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG10]
Type=1
Class=CdelcardDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_cid,edit,1350631552

[CLS:CdelcardDlg]
Type=0
HeaderFile=delcardDlg.h
ImplementationFile=delcardDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

[DLG:IDD_DIALOG11]
Type=1
Class=CAbDlg
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352

[CLS:CAbDlg]
Type=0
HeaderFile=AbDlg.h
ImplementationFile=AbDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CAbDlg

[CLS:ClastRS]
Type=0
HeaderFile=lastRS.h
ImplementationFile=lastRS.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=ClastRS

[DB:ClastRS]
DB=1
DBType=ODBC
ColumnCount=14
Column1=[dbo].[book].[bno], 1, 100
Column2=[category], 1, 100
Column3=[name], 1, 100
Column4=[press], 1, 100
Column5=[year], 4, 4
Column6=[author], 1, 100
Column7=[price], 3, 12
Column8=[total], 4, 4
Column9=[stack], 4, 4
Column10=[cno], -8, 200
Column11=[dbo].[data].[bno], -8, 200
Column12=[bdate], -9, 20
Column13=[rdate], -9, 20
Column14=[id], -8, 200

[DLG:IDD_DIALOG12]
Type=1
Class=ClastDlg
ControlCount=16
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_lcard,edit,1350631552
Control5=IDC_lbook,edit,1350631552
Control6=IDC_chaxun,button,1342242816
Control7=IDC_borrow,button,1342242816
Control8=IDC_return,button,1342242816
Control9=IDC_cancel,button,1342242816
Control10=IDC_STATIC,static,1342308352
Control11=IDC_mid,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_brdate,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_rdate,edit,1350631552
Control16=IDC_dclear,button,1342242816

[CLS:ClastDlg]
Type=0
HeaderFile=lastDlg.h
ImplementationFile=lastDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ClastDlg
VirtualFilter=dWC

[CLS:CdataRS]
Type=0
HeaderFile=dataRS.h
ImplementationFile=dataRS.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:CdataRS]
DB=1
DBType=ODBC
ColumnCount=5
Column1=[cno], 1, 100
Column2=[bno], 1, 100
Column3=[bdate], -9, 20
Column4=[rdate], -9, 20
Column5=[id], 1, 100

