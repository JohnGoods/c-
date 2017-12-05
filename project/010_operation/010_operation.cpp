#include <iostream>
using namespace std;

int main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	cout << "Line 1 - c 的值是 " << c << endl;
	c = a - b;
	cout << "Line 2 - c 的值是 " << c << endl;
	c = a * b;
	cout << "Line 3 - c 的值是 " << c << endl;
	c = a / b;
	cout << "Line 4 - c 的值是 " << c << endl;
	c = a % b;
	cout << "Line 5 - c 的值是 " << c << endl;

	int d = 10;   //  测试自增、自减
	c = d++;	//x++ 不会影响左值 右值会赋值给左值再自增
	cout << "Line 6 - c 的值是 " << c << endl;
	cout << "Line 7 - d 的值是 " << d << endl;

	d = 10;    // 重新赋值
	c = d--;
	cout << "Line 8 - c 的值是 " << c << endl;

	//---------------------------------------
	a = 21;
	b = 10;
	c = 0;

	if (a == b)
	{
		cout << "Line 1 - a 等于 b" << endl;
	}
	else
	{
		cout << "Line 1 - a 不等于 b" << endl;
	}
	if (a < b)
	{
		cout << "Line 2 - a 小于 b" << endl;
	}
	else
	{
		cout << "Line 2 - a 不小于 b" << endl;
	}
	if (a > b)
	{
		cout << "Line 3 - a 大于 b" << endl;
	}
	else
	{
		cout << "Line 3 - a 不大于 b" << endl;
	}
	/* 改变 a 和 b 的值 */
	a = 5;
	b = 20;
	if (a <= b)
	{
		cout << "Line 4 - a 小于或等于 b" << endl;
	}
	if (b >= a)
	{
		cout << "Line 5 - b 大于或等于 a" << endl;
	}
	//---------------------------------------
	a = 5;
	b = 20;
	c = 0;

	if (a && b)
	{
		cout << "Line 1 - 条件为真" << endl;
	}
	if (a || b)
	{
		cout << "Line 2 - 条件为真" << endl;
	}
	/* 改变 a 和 b 的值 */
	a = 0;
	b = 10;
	if (a && b)
	{
		cout << "Line 3 - 条件为真" << endl;
	}
	else
	{
		cout << "Line 4 - 条件不为真" << endl;
	}
	if (!(a && b))
	{
		cout << "Line 5 - 条件为真" << endl;
	}

	unsigned int a1 = 60;      // 60 = 0011 1100  
	unsigned int b1 = 13;      // 13 = 0000 1101
	c = 0;

	c = a1 & b1;             // 12 = 0000 1100
	cout << "Line 1 - c 的值是 " << c << endl;

	c = a1 | b1;             // 61 = 0011 1101
	cout << "Line 2 - c 的值是 " << c << endl;

	c = a1 ^ b1;             // 49 = 0011 0001
	cout << "Line 3 - c 的值是 " << c << endl;

	c = ~a1;                // -61 = 1100 0011
	cout << "Line 4 - c 的值是 " << c << endl;

	c = a1 << 2;            // 240 = 1111 0000
	cout << "Line 5 - c 的值是 " << c << endl;

	c = a1 >> 2;            // 15 = 0000 1111
	cout << "Line 6 - c 的值是 " << c << endl;
	//---------------------------------------

	a = 21;
	c = 0;
	c = a;
	cout << "Line 1 - =  运算符实例，c 的值 = : " << c << endl;

	c += a;
	cout << "Line 2 - += 运算符实例，c 的值 = : " << c << endl;

	c -= a;
	cout << "Line 3 - -= 运算符实例，c 的值 = : " << c << endl;

	c *= a;
	cout << "Line 4 - *= 运算符实例，c 的值 = : " << c << endl;

	c /= a;
	cout << "Line 5 - /= 运算符实例，c 的值 = : " << c << endl;

	c = 200;
	c %= a;
	cout << "Line 6 - %= 运算符实例，c 的值 = : " << c << endl;

	c <<= 2;	//平方
	cout << "Line 7 - <<= 运算符实例，c 的值 = : " << c << endl;

	c >>= 2;	//开方
	cout << "Line 8 - >>= 运算符实例，c 的值 = : " << c << endl;

	c &= 2;	//运算规则：0&0=0;   0&1=0;    1&0=0;  1&1=1;		 即：两位同时为“1”，结果才为“1”，否则为0
	cout << "Line 9 - &= 运算符实例，c 的值 = : " << c << endl;

	c ^= 2;	//运算规则：0^0=0；   0^1=1；   1^0=1；   1^1=0；	即：参加运算的两个对象，如果两个相应位为“异”（值不同），则该位结果为1，否则为0。
	cout << "Line 10 - ^= 运算符实例，c 的值 = : " << c << endl;

	c |= 2;	//0 | 0 = 0；   0 | 1 = 1；   1 | 0 = 1；    1 | 1 = 1；	即 ：参加运算的两个对象只要有一个为1，其值为1
	cout << "Line 11 - |= 运算符实例，c 的值 = : " << c << endl;

	//---------------------------------------
	a = 20;
	b = 10;
	c = 15;
	d = 5;
	int e;

	e = (a + b) * c / d;      // ( 30 * 15 ) / 5
	cout << "(a + b) * c / d 的值是 " << e << endl;

	e = ((a + b) * c) / d;    // (30 * 15 ) / 5
	cout << "((a + b) * c) / d 的值是 " << e << endl;

	e = (a + b) * (c / d);   // (30) * (15/5)
	cout << "(a + b) * (c / d) 的值是 " << e << endl;

	e = a + (b * c) / d;     //  20 + (150/5)
	cout << "a + (b * c) / d 的值是 " << e << endl;


	system("PAUSE");
	return 0;
}