// 043_2_��̬���ӿ�ʹ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#pragma comment(lib,"../043_��̬���ӿ�/Debug/043_��̬���ӿ�.lib") 

int _tmain(int argc, _TCHAR* argv[])
{
	extern int a;
	extern int add(int i, int j);
	printf("%d\n", a);
	printf("%d\n", add(3,5));
	getchar();
	return 0;
}

