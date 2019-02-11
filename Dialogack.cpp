// Dialogack.cpp : implementation file
//

#include "stdafx.h"
#include "TCPDemo.h"
#include "Dialogack.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogack dialog


Dialogack::Dialogack(CWnd* pParent /*=NULL*/)
	: CDialog(Dialogack::IDD, pParent)
{
	//{{AFX_DATA_INIT(Dialogack)
	m_ack3 = 0;
	//}}AFX_DATA_INIT
}


void Dialogack::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Dialogack)
	DDX_Text(pDX, IDC_EDIT1, m_ack3);
	DDV_MinMaxInt(pDX, m_ack3, 1, 40);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Dialogack, CDialog)
	//{{AFX_MSG_MAP(Dialogack)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Dialogack message handlers
