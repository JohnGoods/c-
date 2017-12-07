#include <iostream>
using namespace std;

//指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
//就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。
//指针变量声明的一般形式为： type *var-name;

//使用指针时会频繁进行以下几个操作：定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值

int main(){
	int var1 = 20;
	char var2[10];
	int *ip;	//声明指针

	cout << "var1 变量的地址： ";
	cout << &var1 << endl;

	cout << "var2 变量的地址： ";
	cout << &var2 << endl;

	ip = &var1;
	cout << "Value of var1 variable: ";
	cout << var1 << endl;

	cout << "Value of ip variable: ";
	cout << ip << endl;

	cout << "Value of *ip variable: ";
	cout << *ip << endl;


	system("PAUSE");
	return 0;
}