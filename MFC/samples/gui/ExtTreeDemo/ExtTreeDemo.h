// ExtTreeDemo.h : main header file for the EXTTREEDEMO application
//

#if !defined(AFX_EXTTREEDEMO_H__3049C3C6_BCB8_11D1_A3D5_0080C83F712F__INCLUDED_)
#define AFX_EXTTREEDEMO_H__3049C3C6_BCB8_11D1_A3D5_0080C83F712F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExtTreeDemoApp:
// See ExtTreeDemo.cpp for the implementation of this class
//

class CExtTreeDemoApp : public CWinApp
{
public:
	CExtTreeDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExtTreeDemoApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExtTreeDemoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXTTREEDEMO_H__3049C3C6_BCB8_11D1_A3D5_0080C83F712F__INCLUDED_)
