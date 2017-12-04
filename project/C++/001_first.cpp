#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::cerr << "error tip"<< std::endl;
	std::clog << "log~~"<< std::endl;

	std::cout << "Enter two numbers:";	//提示用户输入两个数
	int v1, v2;
	std::cin >> v1 >> v2;	//读取输入数据
	std::cout << "The sum of" << v1 << "and" << v2 << "is" << v1 + v2 << std::endl;

	system("PAUSE");
	return 0;
	//Ctrl+z over cmd
}