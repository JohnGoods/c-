// 043_2_静态链接库使用.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma comment(lib,"../043_静态链接库/Debug/043_静态链接库.lib") 

int _tmain(int argc, _TCHAR* argv[])
{
	extern int a;
	extern int add(int i, int j);
	printf("%d\n", a);
	printf("%d\n", add(3,5));
	getchar();
	return 0;
}

