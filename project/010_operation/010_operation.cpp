#include <iostream>
using namespace std;

int main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	cout << "Line 1 - c ��ֵ�� " << c << endl;
	c = a - b;
	cout << "Line 2 - c ��ֵ�� " << c << endl;
	c = a * b;
	cout << "Line 3 - c ��ֵ�� " << c << endl;
	c = a / b;
	cout << "Line 4 - c ��ֵ�� " << c << endl;
	c = a % b;
	cout << "Line 5 - c ��ֵ�� " << c << endl;

	int d = 10;   //  �����������Լ�
	c = d++;	//x++ ����Ӱ����ֵ ��ֵ�ḳֵ����ֵ������
	cout << "Line 6 - c ��ֵ�� " << c << endl;
	cout << "Line 7 - d ��ֵ�� " << d << endl;

	d = 10;    // ���¸�ֵ
	c = d--;
	cout << "Line 8 - c ��ֵ�� " << c << endl;

	//---------------------------------------
	a = 21;
	b = 10;
	c = 0;

	if (a == b)
	{
		cout << "Line 1 - a ���� b" << endl;
	}
	else
	{
		cout << "Line 1 - a ������ b" << endl;
	}
	if (a < b)
	{
		cout << "Line 2 - a С�� b" << endl;
	}
	else
	{
		cout << "Line 2 - a ��С�� b" << endl;
	}
	if (a > b)
	{
		cout << "Line 3 - a ���� b" << endl;
	}
	else
	{
		cout << "Line 3 - a ������ b" << endl;
	}
	/* �ı� a �� b ��ֵ */
	a = 5;
	b = 20;
	if (a <= b)
	{
		cout << "Line 4 - a С�ڻ���� b" << endl;
	}
	if (b >= a)
	{
		cout << "Line 5 - b ���ڻ���� a" << endl;
	}
	//---------------------------------------
	a = 5;
	b = 20;
	c = 0;

	if (a && b)
	{
		cout << "Line 1 - ����Ϊ��" << endl;
	}
	if (a || b)
	{
		cout << "Line 2 - ����Ϊ��" << endl;
	}
	/* �ı� a �� b ��ֵ */
	a = 0;
	b = 10;
	if (a && b)
	{
		cout << "Line 3 - ����Ϊ��" << endl;
	}
	else
	{
		cout << "Line 4 - ������Ϊ��" << endl;
	}
	if (!(a && b))
	{
		cout << "Line 5 - ����Ϊ��" << endl;
	}

	unsigned int a1 = 60;      // 60 = 0011 1100  
	unsigned int b1 = 13;      // 13 = 0000 1101
	c = 0;

	c = a1 & b1;             // 12 = 0000 1100
	cout << "Line 1 - c ��ֵ�� " << c << endl;

	c = a1 | b1;             // 61 = 0011 1101
	cout << "Line 2 - c ��ֵ�� " << c << endl;

	c = a1 ^ b1;             // 49 = 0011 0001
	cout << "Line 3 - c ��ֵ�� " << c << endl;

	c = ~a1;                // -61 = 1100 0011
	cout << "Line 4 - c ��ֵ�� " << c << endl;

	c = a1 << 2;            // 240 = 1111 0000
	cout << "Line 5 - c ��ֵ�� " << c << endl;

	c = a1 >> 2;            // 15 = 0000 1111
	cout << "Line 6 - c ��ֵ�� " << c << endl;
	//---------------------------------------

	a = 21;
	c = 0;
	c = a;
	cout << "Line 1 - =  �����ʵ����c ��ֵ = : " << c << endl;

	c += a;
	cout << "Line 2 - += �����ʵ����c ��ֵ = : " << c << endl;

	c -= a;
	cout << "Line 3 - -= �����ʵ����c ��ֵ = : " << c << endl;

	c *= a;
	cout << "Line 4 - *= �����ʵ����c ��ֵ = : " << c << endl;

	c /= a;
	cout << "Line 5 - /= �����ʵ����c ��ֵ = : " << c << endl;

	c = 200;
	c %= a;
	cout << "Line 6 - %= �����ʵ����c ��ֵ = : " << c << endl;

	c <<= 2;	//ƽ��
	cout << "Line 7 - <<= �����ʵ����c ��ֵ = : " << c << endl;

	c >>= 2;	//����
	cout << "Line 8 - >>= �����ʵ����c ��ֵ = : " << c << endl;

	c &= 2;	//�������0&0=0;   0&1=0;    1&0=0;  1&1=1;		 ������λͬʱΪ��1���������Ϊ��1��������Ϊ0
	cout << "Line 9 - &= �����ʵ����c ��ֵ = : " << c << endl;

	c ^= 2;	//�������0^0=0��   0^1=1��   1^0=1��   1^1=0��	�����μ�����������������������ӦλΪ���족��ֵ��ͬ�������λ���Ϊ1������Ϊ0��
	cout << "Line 10 - ^= �����ʵ����c ��ֵ = : " << c << endl;

	c |= 2;	//0 | 0 = 0��   0 | 1 = 1��   1 | 0 = 1��    1 | 1 = 1��	�� ���μ��������������ֻҪ��һ��Ϊ1����ֵΪ1
	cout << "Line 11 - |= �����ʵ����c ��ֵ = : " << c << endl;

	//---------------------------------------
	a = 20;
	b = 10;
	c = 15;
	d = 5;
	int e;

	e = (a + b) * c / d;      // ( 30 * 15 ) / 5
	cout << "(a + b) * c / d ��ֵ�� " << e << endl;

	e = ((a + b) * c) / d;    // (30 * 15 ) / 5
	cout << "((a + b) * c) / d ��ֵ�� " << e << endl;

	e = (a + b) * (c / d);   // (30) * (15/5)
	cout << "(a + b) * (c / d) ��ֵ�� " << e << endl;

	e = a + (b * c) / d;     //  20 + (150/5)
	cout << "a + (b * c) / d ��ֵ�� " << e << endl;


	system("PAUSE");
	return 0;
}