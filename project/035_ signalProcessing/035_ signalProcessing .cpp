//�ź����ɲ���ϵͳ�������̵��жϣ���������ֹһ������
//�� UNIX��LINUX��Mac OS X �� Windows ϵͳ�ϣ�����ͨ���� Ctrl + C �����жϡ�

//void(*signal(int sig, void(*func)(int)))(int);

//�����������������������һ��������һ���������������źŵı�ţ��ڶ���������һ��ָ���źŴ�������ָ�롣
//�����Ǳ�дһ���򵥵� C++ ����ʹ�� signal() �������� SIGINT �źš����������ڳ����в���ʲô�źţ�
//��������ʹ�� signal ������ע���źţ����������źŴ�����������
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int a = 1;
	while (a)
	{
		a++;
		cout << "a----->"<< a << endl;
		Sleep(100);
	}
	system("pause");
	return 0;
}