// 044_2_��̬���ӿ�.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>
//#pragma comment(lib,"044_��̬���ӿ�.lib") 

/*extern __declspec(dllimport) int aaa;
extern __declspec(dllimport) int add(int a,int b);*/
int _tmain(int argc, _TCHAR* argv[])
{
	/*printf("%d\n", aaa);
	printf("%d\n", add(3,4));
	getchar();
	return 0;*/
	//1��LoadLibrary װ��dll
	//2��GetProcAddress ��λ���ŵ�ַ
	typedef int *typeadd(int, int);
	HMODULE hdll = LoadLibrary(_T("044_��̬���ӿ�.dll"));
	if (hdll == NULL)
	{
		printf("װ��dllʧ�ܣ��˳�,����������˳�\n");
		getchar();
		return -1;
	}
	// int *paaa=(int*)GetProcAddress(hdll,"?aaa@@3HA");
	int *paaa = (int*)GetProcAddress(hdll, "aaa");
	if (paaa == NULL)
	{
		printf("��λ���ŵ�ַʧ�ܣ��˳�,����������˳�\n");
		getchar();
		return -1;
	}
	printf("aaa=%d \n", *paaa);
	//typeadd* add=(typeadd*) GetProcAddress(hdll,"?add@@YAHHH@Z");
	typeadd* add = (typeadd*)GetProcAddress(hdll, "add");
	if (add == NULL)
	{
		printf("add���ŵ�ַ��λʧ�ܣ��˳�,����������˳�\n");
		getchar();
		return -1;
	}
	printf("add(1,7)=%d \n", add(1, 7));
	getchar();
	return 0;
}

