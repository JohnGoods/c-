#include <iostream>

//��������
void func(void);
static int count = 10;	/* ȫ�ֱ��� */	// static �洢�����ڴ��������  ( �ڳ���ʼʱ�ͷ����˹̶����ڴ�,�������ʱ���ͷ��ڴ� ��

int main(){
	while (count--)
	{
		func();
	}
	system("PAUSE");
	return 0;
}

// ��������
void func(void)
{
	static int i = 5; // �ֲ���̬����
	i++;
	std::cout << "���� i Ϊ " << i;
	std::cout << " , ���� count Ϊ " << count << std::endl;
}
