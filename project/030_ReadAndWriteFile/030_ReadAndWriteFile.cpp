#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	//���ļ�
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
	
	//д��
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
	//д��
	file << age << endl;
	//�ر�
	file.close();
	//��ȡ
	file.open("d:\\try.txt", ios::in);
	string a, b;
	//��ȡ
	file >> a >> b;
	cout << a << endl;
	cout << b << endl;
	file.close();
	system("PAUSE");
	return 0;
}