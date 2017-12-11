//信号是由操作系统传给进程的中断，会提早终止一个程序。
//在 UNIX、LINUX、Mac OS X 或 Windows 系统上，可以通过按 Ctrl + C 产生中断。

//void(*signal(int sig, void(*func)(int)))(int);

//这个函数接收两个参数：第一个参数是一个整数，代表了信号的编号；第二个参数是一个指向信号处理函数的指针。
//让我们编写一个简单的 C++ 程序，使用 signal() 函数捕获 SIGINT 信号。不管您想在程序中捕获什么信号，
//您都必须使用 signal 函数来注册信号，并将其与信号处理程序相关联
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