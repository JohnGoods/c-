#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::cerr << "error tip"<< std::endl;
	std::clog << "log~~"<< std::endl;

	std::cout << "Enter two numbers:";	//��ʾ�û�����������
	int v1, v2;
	std::cin >> v1 >> v2;	//��ȡ��������
	std::cout << "The sum of" << v1 << "and" << v2 << "is" << v1 + v2 << std::endl;

	system("PAUSE");
	return 0;
	//Ctrl+z over cmd
}