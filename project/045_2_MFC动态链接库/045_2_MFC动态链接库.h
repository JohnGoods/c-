
// 045_2_MFC��̬���ӿ�.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy045_2_MFC��̬���ӿ�App: 
// �йش����ʵ�֣������ 045_2_MFC��̬���ӿ�.cpp
//

class CMy045_2_MFC��̬���ӿ�App : public CWinApp
{
public:
	CMy045_2_MFC��̬���ӿ�App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy045_2_MFC��̬���ӿ�App theApp;