
// 037_MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy037_MFCApp: 
// �йش����ʵ�֣������ 037_MFC.cpp
//

class CMy037_MFCApp : public CWinApp
{
public:
	CMy037_MFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy037_MFCApp theApp;