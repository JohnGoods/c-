#include <iostream>
using namespace std;

//class derived-class: access-specifier base-class
//���У��������η� access - specifier �� public��protected �� private ���е�һ����base - class
//��֮ǰ�������ĳ��������ơ����δʹ�÷������η� access - specifier����Ĭ��Ϊ private��

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

//������
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

//�����̳�(��״�̳�), A->D, B->D, C->(A��B)�����磺
//class D{ ...... };
//class B : public D{ ...... };
//class A : public D{ ...... };
//class C : public B, public A{ ..... };
//����̳л�ʹD������������, Ҫ������������Ҫ������̳и�ʽ
//��ʽ��class ���� : virtual �̳з�ʽ ������
//class D{ ...... };
//class B : virtual public D{ ...... };
//class A : virtual public D{ ...... };
//class C : public B, public A{ ..... };
//��̳�--���ڴ��������ʱ��ᴴ��һ������ڴ�����������ʱ��