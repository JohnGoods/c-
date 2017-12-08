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
	/*�麯�� ���ڻ�����ʹ�ùؼ��� virtual �����ĺ������������������¶�������ж�����麯��ʱ������߱�������Ҫ��̬���ӵ��ú�����
	������Ҫ�����ڳ������������Ը��������õĶ���������ѡ����õĺ��������ֲ�������Ϊ��̬���ӣ�����ڰ󶨡�*/

	//��Ҫ�����麯��
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
	Sharp *sharp;	//����ָ��
	Rectangle rect(2, 3);
	Triangle tri(3, 4);

	sharp = &rect;
	sharp->result();	//ָ�벻�� xx.xx()
	
	sharp = &tri;
	sharp->result();

	system("PAUSE");
	return 0;
}