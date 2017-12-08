#include <iostream>
using namespace std;

//class derived-class: access-specifier base-class
//其中，访问修饰符 access - specifier 是 public、protected 或 private 其中的一个，base - class
//是之前定义过的某个类的名称。如果未使用访问修饰符 access - specifier，则默认为 private。

class Sharp{
public:
	void setWidth(int w){
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

class Sharp1{
public:
	int getNum(){
		int num = 10;
		return num;
	}
};

//派生类
class Rectangle :public Sharp , public Sharp1{
public:
	int getArea()
	{
		return (width * height);
	}
};


int main(){
	Rectangle rect;
	rect.setWidth(6);
	rect.setHeight(5);
	int num = rect.getArea();
	cout << "num:" << num << endl;

	int num1 = rect.getNum();
	cout << "num1:" << num1 << endl;
	system("PAUSE");
	return 0;
}

//另外多继承(环状继承), A->D, B->D, C->(A，B)，例如：
//class D{ ...... };
//class B : public D{ ...... };
//class A : public D{ ...... };
//class C : public B, public A{ ..... };
//这个继承会使D创建两个对象, 要解决上面问题就要用虚拟继承格式
//格式：class 类名 : virtual 继承方式 父类名
//class D{ ...... };
//class B : virtual public D{ ...... };
//class A : virtual public D{ ...... };
//class C : public B, public A{ ..... };
//虚继承--（在创建对象的时候会创建一个虚表）在创建父类对象的时候