#include <iostream>
using namespace std;
//���ñ�����һ��������Ҳ����˵������ĳ���Ѵ��ڱ�������һ�����֡�
//һ�������ó�ʼ��Ϊĳ���������Ϳ���ʹ�ø��������ƻ����������ָ�����

int main(){
	// �����򵥵ı���
	int    i;
	double d;

	// �������ñ���
	int&    r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	s = 11.8;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	system("PAUSE");
	return 0;
}