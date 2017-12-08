#include <iostream>
using namespace std;

class Sharp{
protected:
	int width;
	int height;
public:
	Sharp(int w, int h){
		width = w;
		height = h;
	}
	/*虚函数 是在基类中使用关键字 virtual 声明的函数。在派生类中重新定义基类中定义的虚函数时，会告诉编译器不要静态链接到该函数。
	我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。*/

	//需要定义虚函数
	virtual int result(){
		cout << "Parent class result :" << endl;
		return 0;
	}
};

class Rectangle :public Sharp{
public:
	Rectangle(int w = 0, int h = 0) :Sharp(w, h){ }
	int result()
	{
		cout << "Rectangle class result :" << endl;
		return (width * height);
	}
};


class Triangle :public Sharp{
public:
	Triangle(int w=0,int h=0) :Sharp(w,h){	}
	int result(){
		cout << "Triangle class result :" << endl;
		return (width * height / 2);
	}
};

int main(){
	Sharp *sharp;	//声明指针
	Rectangle rect(2, 3);
	Triangle tri(3, 4);

	sharp = &rect;
	sharp->result();	//指针不是 xx.xx()
	
	sharp = &tri;
	sharp->result();

	system("PAUSE");
	return 0;
}