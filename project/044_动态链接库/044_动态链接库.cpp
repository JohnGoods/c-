// 044_��̬���ӿ�.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "044_��̬���ӿ�.h"


// ���ǵ���������һ��ʾ��
MY044__API int nMy044_��̬���ӿ�=0;

// ���ǵ���������һ��ʾ����
MY044__API int fnMy044_��̬���ӿ�(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� 044_��̬���ӿ�.h
CMy044_��̬���ӿ�::CMy044_��̬���ӿ�()
{
	return;
}

extern "C" MY044__API int aaa = 888;
extern "C" __declspec(dllexport) int add(int a, int b){
	return a + b;
}
