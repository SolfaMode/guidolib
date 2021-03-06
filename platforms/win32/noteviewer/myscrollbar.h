/*
	GUIDO Library
	Copyright (C) 2002  Holger Hoos, Juergen Kilian, Kai Renz

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/
#if !defined(AFX_MYSCROLLBAR_H__0744CFE3_AF8F_11D2_AD0A_0080C75E70DF__INCLUDED_)
#define AFX_MYSCROLLBAR_H__0744CFE3_AF8F_11D2_AD0A_0080C75E70DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyScrollBar.h : header-file
//

/////////////////////////////////////////////////////////////////////////////
// Fenster CMyScrollBar 

class CMyScrollBar : public CScrollBar
{
// Konstruktion
public:
	CMyScrollBar();

// Attribute
public:

// Operationen
public:

// overrides
	// virtual overrides generated by the class wizzar
	//{{AFX_VIRTUAL(CMyScrollBar)
	//}}AFX_VIRTUAL

// implementation
public:
	virtual ~CMyScrollBar();

	// generated message maps protected:
	//{{AFX_MSG(CMyScrollBar)
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// MS Visual C++ inserts directly before the previous line additional deklarations

#endif // AFX_MYSCROLLBAR_H__0744CFE3_AF8F_11D2_AD0A_0080C75E70DF__INCLUDED_
