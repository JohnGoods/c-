//#define Ԥ����
//#define Ԥ����ָ�����ڴ������ų������÷��ų���ͨ����Ϊ�ָ꣬���һ����ʽ�ǣ�
//#define macro-name replacement-text 

#include <iostream>
using namespace std;

#define PI 3.14159
//������
#define Max(a,b)(a<b?a:b)
#define DEBUG	//����

int main()
{
	cout << "Value of PI :" << PI << endl;
	int i, j;
	i = 100;
	j = 30;
	cout << "��С��ֵΪ��" << Max(i, j) << endl;

#ifdef DEBUG
	cerr << "Trace: Inside main function" << endl;
#endif

#if 0	// �����б���Ĵ���
	/* ����ע�Ͳ��� */
	cout << MKSTR(HELLO C++) << endl;
#endif

#ifdef DEBUG
	cerr << "Trace: Coming out of main function" << endl;
#endif

	system("PAUSE");
	return 0;
}