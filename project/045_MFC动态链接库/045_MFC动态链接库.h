// 045_MFC动态链接库.h : 045_MFC动态链接库 DLL 的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CMy045_MFC动态链接库App
// 有关此类实现的信息，请参阅 045_MFC动态链接库.cpp
//

class CMy045_MFC动态链接库App : public CWinApp
{
public:
	CMy045_MFC动态链接库App();

// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	DECLARE_MESSAGE_MAP()
};
