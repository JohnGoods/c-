#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	//打开文件
	fstream file("d:\\try.txt", ios::out);
	cout << "Enter your name:" << endl;
	string name;
	int age; 
	try
	{
		cin >> name;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
	
	//写入
	file << name << endl;
	cout << "Enter your age:" << endl;
	try
	{
		cin >> age;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
	//写入
	file << age << endl;
	//关闭
	file.close();
	//读取
	file.open("d:\\try.txt", ios::in);
	string a, b;
	//读取
	file >> a >> b;
	cout << a << endl;
	cout << b << endl;
	file.close();
	system("PAUSE");
	return 0;
}