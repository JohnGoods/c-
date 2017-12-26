// 044_2_动态链接库.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>
//#pragma comment(lib,"044_动态链接库.lib") 

/*extern __declspec(dllimport) int aaa;
extern __declspec(dllimport) int add(int a,int b);*/
int _tmain(int argc, _TCHAR* argv[])
{
	/*printf("%d\n", aaa);
	printf("%d\n", add(3,4));
	getchar();
	return 0;*/
	//1用LoadLibrary 装载dll
	//2用GetProcAddress 定位符号地址
	typedef int *typeadd(int, int);
	HMODULE hdll = LoadLibrary(_T("044_动态链接库.dll"));
	if (hdll == NULL)
	{
		printf("装载dll失败，退出,按下任意键退出\n");
		getchar();
		return -1;
	}
	// int *paaa=(int*)GetProcAddress(hdll,"?aaa@@3HA");
	int *paaa = (int*)GetProcAddress(hdll, "aaa");
	if (paaa == NULL)
	{
		printf("定位符号地址失败，退出,按下任意键退出\n");
		getchar();
		return -1;
	}
	printf("aaa=%d \n", *paaa);
	//typeadd* add=(typeadd*) GetProcAddress(hdll,"?add@@YAHHH@Z");
	typeadd* add = (typeadd*)GetProcAddress(hdll, "add");
	if (add == NULL)
	{
		printf("add符号地址定位失败，退出,按下任意键退出\n");
		getchar();
		return -1;
	}
	printf("add(1,7)=%d \n", add(1, 7));
	getchar();
	return 0;
}

