#include <iostream>
using namespace std;

//ָ����һ����������ֵΪ��һ�������ĵ�ַ�������ڴ�λ�õ�ֱ�ӵ�ַ��
//����������������һ������������ʹ��ָ��洢����������ַ֮ǰ���������������
//ָ�����������һ����ʽΪ�� type *var-name;

//ʹ��ָ��ʱ��Ƶ���������¼�������������һ��ָ��������ѱ�����ַ��ֵ��ָ�롢����ָ������п��õ�ַ��ֵ����Щ��ͨ��ʹ��һԪ����� * ������λ�ڲ�������ָ����ַ�ı�����ֵ

int main(){
	int var1 = 20;
	char var2[10];
	int *ip;	//����ָ��

	cout << "var1 �����ĵ�ַ�� ";
	cout << &var1 << endl;

	cout << "var2 �����ĵ�ַ�� ";
	cout << &var2 << endl;

	ip = &var1;
	cout << "Value of var1 variable: ";
	cout << var1 << endl;

	cout << "Value of ip variable: ";
	cout << ip << endl;

	cout << "Value of *ip variable: ";
	cout << *ip << endl;


	system("PAUSE");
	return 0;
}