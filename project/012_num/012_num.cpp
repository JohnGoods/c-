#include <iostream>
#include <stdio.h>
#include <time.h> /*�õ���time����������Ҫ�����ͷ�ļ�*/
using namespace std;
#define MAX 10

int main(){
	// ���ֶ���
	short  s;
	int    i;
	long   l;
	float  f;
	double d;

	// ���ָ�ֵ
	s = 10;
	i = 1000;
	l = 1000000;
	f = 230.47;
	d = 30949.374;

	// �������
	cout << "short  s :" << s << endl;
	cout << "int    i :" << i << endl;
	cout << "long   l :" << l << endl;
	cout << "float  f :" << f << endl;
	cout << "double d :" << d << endl;

	// ��ѧ����
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;

	int number[MAX] = { 0 };
	i = 0;
	/*
	ԭ�ͣ� void srand(unsigned seed);
	�÷�������Ҫ�ṩһ�����ӣ�������ӻ��Ӧһ������������ʹ����ͬ�����Ӻ����rand()���������һ�����������
	�磺 srand(1); ֱ��ʹ�� 1 ����ʼ�����ӡ�����Ϊ�˷�ֹ�����ÿ���ظ�������ʹ��ϵͳʱ������ʼ������ʹ�� time ���������ϵͳʱ�䣬
	���ķ���ֵΪ�� 00:00 : 00 GMT, January 1, 1970 ��������������������Ȼ�� time_t ������ת��Ϊ(unsigned)���ٴ��� srand ������
	���� srand((unsigned)time(&t)); ����һ�������÷�������Ҫ����time_t��t����, ���� srand((unsigned)time(NULL));
	ֱ�Ӵ���һ����ָ�룬��Ϊ��ĳ���������������Ҫ����������õ�t���ݡ�*/
	srand((unsigned)time(NULL)); /*������*/
	for (i = 0; i < MAX; i++)
	{
		number[i] = rand() % 100; /*����100���ڵ��������*/
		printf("%d ", number[i]);
	}
	printf("\n");

	system("PAUSE");
	return 0;
}