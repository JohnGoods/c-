//#define 预处理
//#define 预处理指令用于创建符号常量。该符号常量通常称为宏，指令的一般形式是：
//#define macro-name replacement-text 

#include <iostream>
using namespace std;

#define PI 3.14159
//参数宏
#define Max(a,b)(a<b?a:b)
#define DEBUG	//开关

int main()
{
	cout << "Value of PI :" << PI << endl;
	int i, j;
	i = 100;
	j = 30;
	cout << "较小的值为：" << Max(i, j) << endl;

#ifdef DEBUG
	cerr << "Trace: Inside main function" << endl;
#endif

#if 0	// 不进行编译的代码
	/* 这是注释部分 */
	cout << MKSTR(HELLO C++) << endl;
#endif

#ifdef DEBUG
	cerr << "Trace: Coming out of main function" << endl;
#endif

	system("PAUSE");
	return 0;
}