// 044_2_��̬���ӿ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
//#pragma comment(lib,"../043_��̬���ӿ�/Debug/043_��̬���ӿ�.lib") 
#pragma comment(lib,"044_��̬���ӿ�.lib") 

extern __declspec(dllimport) int aaa;
extern __declspec(dllimport) int add(int a,int b);
int _tmain(int argc, _TCHAR* argv[])
{
	printf("%d\n", aaa);
	printf("%d\n", add(3,4));
	getchar();
	return 0;
}

