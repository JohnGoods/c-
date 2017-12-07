#include <iostream>
using namespace std;
//引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
//一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量

int main(){
	// 声明简单的变量
	int    i;
	double d;

	// 声明引用变量
	int&    r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	s = 11.8;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;

	system("PAUSE");
	return 0;
}