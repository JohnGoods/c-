
// 042_MFC_Socket_Server.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy042_MFC_Socket_ServerApp: 
// �йش����ʵ�֣������ 042_MFC_Socket_Server.cpp
//

class CMy042_MFC_Socket_ServerApp : public CWinApp
{
public:
	CMy042_MFC_Socket_ServerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy042_MFC_Socket_ServerApp theApp;