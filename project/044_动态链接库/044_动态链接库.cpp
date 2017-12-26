// 044_动态链接库.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "044_动态链接库.h"


// 这是导出变量的一个示例
MY044__API int nMy044_动态链接库=0;

// 这是导出函数的一个示例。
MY044__API int fnMy044_动态链接库(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 044_动态链接库.h
CMy044_动态链接库::CMy044_动态链接库()
{
	return;
}

extern "C" MY044__API int aaa = 888;
extern "C" __declspec(dllexport) int add(int a, int b){
	return a + b;
}
