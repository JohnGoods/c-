#include <iostream>
using namespace std;

//在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址。this 指针是所有成员函数的隐含参数。因此，在成员函数内部，它可以用来指向调用对象。
//友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。

class Box
{
public:
	Box(double l = 2.0, double b = 2.0, double h = 2.0){
		length = l;
		breadth = b;
		height = h;
	}
	double Volume(){
		return length * breadth * height;
	}

	int compare(Box box){
		return this->Volume() > box.Volume();
	}

private:
	double length;
	double breadth;
	double height;
};

int main(){
	Box box1(4, 5, 6);
	Box box2(4, 5, 7);
	if (box1.compare(box2)){
		cout << "Box2 is smaller than Box1" << endl;
	}
	else{
		cout << "Box2 is equal to or larger than Box1" << endl;
	}
	system("PAUSE");
	return 0;
}