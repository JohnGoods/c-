
// 038_�ַ���ת.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy038_�ַ���תApp: 
// �йش����ʵ�֣������ 038_�ַ���ת.cpp
//

class CMy038_�ַ���תApp : public CWinApp
{
public:
	CMy038_�ַ���תApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy038_�ַ���תApp theApp;