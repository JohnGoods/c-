// 044_2_动态链接库.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#pragma comment(lib,"../043_静态链接库/Debug/043_静态链接库.lib") 
#pragma comment(lib,"044_动态链接库.lib") 

extern __declspec(dllimport) int aaa;
extern __declspec(dllimport) int add(int a,int b);
int _tmain(int argc, _TCHAR* argv[])
{
	printf("%d\n", aaa);
	printf("%d\n", add(3,4));
	getchar();
	return 0;
}

