#include <iostream>
using namespace std;

//���ǿ���ʹ�� static �ؼ����������Ա����Ϊ��̬�ġ�������������ĳ�ԱΪ��̬ʱ������ζ�����۴������ٸ���Ķ��󣬾�̬��Ա��ֻ��һ��������
//��̬��Ա��������ж������ǹ���ġ���������������ĳ�ʼ����䣬�ڴ�����һ������ʱ�����еľ�̬���ݶ��ᱻ��ʼ��Ϊ�㡣
//���ǲ��ܰѾ�̬��Ա�ĳ�ʼ����������Ķ����У����ǿ���������ⲿͨ��ʹ�÷�Χ���������::������������̬�����Ӷ��������г�ʼ��

class Box
{
public:
	static int count;
	Box(double l = 2.0, double b = 2.0, double h = 2.0){
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
		// ÿ�δ�������ʱ���� 1
		count++;
	}

private:
	double length;     // ����
	double breadth;    // ���
	double height;     // �߶�
};

int Box::count = 0;

int main(){
	Box Box1(3.3, 1.2, 1.5);    // ���� box1
	Box Box2(8.5, 6.0, 2.0);    // ���� box2

	// ������������
	cout << "Total objects: " << Box::count << endl;

	system("PAUSE");
	return 0;
}

//��̬��Ա��������ͨ��Ա����������
//��̬��Ա����û�� this ָ�룬ֻ�ܷ��ʾ�̬��Ա��������̬��Ա�����;�̬��Ա��������
//��ͨ��Ա������ this ָ�룬���Է������е������Ա������̬��Ա����û�� this ָ��