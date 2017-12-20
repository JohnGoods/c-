#include "stdafx.h"
#include "NumEdit.h"


CNumEdit::CNumEdit()
{
}


CNumEdit::~CNumEdit()
{
}
BEGIN_MESSAGE_MAP(CNumEdit, CEdit)
	ON_WM_CHAR()
END_MESSAGE_MAP()


void CNumEdit::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	if (nChar == 8){
		CEdit::OnChar(nChar, nRepCnt, nFlags);
		return;
	}
	// TODO:  在此添加消息处理程序代码和/或调用默认值
	if (nChar >= '0'&&nChar <= '9' || nChar == '.'){
		if (CountPoint() > 0&&nChar=='.'){
			return;
		}
		CEdit::OnChar(nChar, nRepCnt, nFlags);
	}
	
}


int CNumEdit::CountPoint()
{
	UINT num = 0;
	TCHAR *S = new TCHAR[GetWindowTextLength()*sizeof(TCHAR)];
	GetWindowText(S,GetWindowTextLength());
	for (UINT i = 0; i < GetWindowTextLength(); i++){
		if (S[i] == '.'){
			num++;
		}
	}
	delete[] S;
	return num;
}
