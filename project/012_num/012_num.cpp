#include <iostream>
#include <stdio.h>
#include <time.h> /*用到了time函数，所以要有这个头文件*/
using namespace std;
#define MAX 10

int main(){
	// 数字定义
	short  s;
	int    i;
	long   l;
	float  f;
	double d;

	// 数字赋值
	s = 10;
	i = 1000;
	l = 1000000;
	f = 230.47;
	d = 30949.374;

	// 数字输出
	cout << "short  s :" << s << endl;
	cout << "int    i :" << i << endl;
	cout << "long   l :" << l << endl;
	cout << "float  f :" << f << endl;
	cout << "double d :" << d << endl;

	// 数学运算
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;

	int number[MAX] = { 0 };
	i = 0;
	/*
	原型： void srand(unsigned seed);
	用法：它需要提供一个种子，这个种子会对应一个随机数，如果使用相同的种子后面的rand()函数会出现一样的随机数。
	如： srand(1); 直接使用 1 来初始化种子。不过为了防止随机数每次重复，常常使用系统时间来初始化，即使用 time 函数来获得系统时间，
	它的返回值为从 00:00 : 00 GMT, January 1, 1970 到现在所持续的秒数，然后将 time_t 型数据转化为(unsigned)型再传给 srand 函数，
	即： srand((unsigned)time(&t)); 还有一个经常用法，不需要定义time_t型t变量, 即： srand((unsigned)time(NULL));
	直接传入一个空指针，因为你的程序中往往并不需要经过参数获得的t数据。*/
	srand((unsigned)time(NULL)); /*播种子*/
	for (i = 0; i < MAX; i++)
	{
		number[i] = rand() % 100; /*产生100以内的随机整数*/
		printf("%d ", number[i]);
	}
	printf("\n");

	system("PAUSE");
	return 0;
}