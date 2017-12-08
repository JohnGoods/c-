#include <iostream>
using namespace std;

//我们可以使用 static 关键字来把类成员定义为静态的。当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。
//静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，所有的静态数据都会被初始化为零。
//我们不能把静态成员的初始化放置在类的定义中，但是可以在类的外部通过使用范围解析运算符::来重新声明静态变量从而对它进行初始化

class Box
{
public:
	static int count;
	Box(double l = 2.0, double b = 2.0, double h = 2.0){
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		// 每次创建对象时增加 1
		count++;
	}

private:
	double length;     // 长度
	double breadth;    // 宽度
	double height;     // 高度
};

int Box::count = 0;

int main(){
	Box Box1(3.3, 1.2, 1.5);    // 声明 box1
	Box Box2(8.5, 6.0, 2.0);    // 声明 box2

	// 输出对象的总数
	cout << "Total objects: " << Box::count << endl;

	system("PAUSE");
	return 0;
}

//静态成员函数与普通成员函数的区别：
//静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
//普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针