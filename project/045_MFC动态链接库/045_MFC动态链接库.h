// 045_MFC��̬���ӿ�.h : 045_MFC��̬���ӿ� DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy045_MFC��̬���ӿ�App
// �йش���ʵ�ֵ���Ϣ������� 045_MFC��̬���ӿ�.cpp
//

class CMy045_MFC��̬���ӿ�App : public CWinApp
{
public:
	CMy045_MFC��̬���ӿ�App();

// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	DECLARE_MESSAGE_MAP()
};
