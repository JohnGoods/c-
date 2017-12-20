#pragma once
#include "afxwin.h"
class CNumEdit :
	public CEdit
{
public:
	CNumEdit();
	~CNumEdit();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	int CountPoint();
};

