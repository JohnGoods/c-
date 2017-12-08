#include <iostream>
using namespace std;

//�� C++ �У�ÿһ��������ͨ�� this ָ���������Լ��ĵ�ַ��this ָ�������г�Ա������������������ˣ��ڳ�Ա�����ڲ�������������ָ����ö���
//��Ԫ����û�� this ָ�룬��Ϊ��Ԫ������ĳ�Ա��ֻ�г�Ա�������� this ָ�롣

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