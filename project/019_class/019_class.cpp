#include <iostream>
#include <string>
using namespace std;

class Box{
public:
	double length;   // ����
	double breadth;  // ���
	double height;   // �߶�

	//�ຯ��
	double TestFunciton(void);

};

//�ຯ��
double Box::TestFunciton(void){
	return length*breadth*height;
}


//��������η�
class Bass{
	private :
		string text;
	public:
		void setText(string txt);
		string getText(void);
	protected :	//�ܱ��� ����ɷ���
		string text1;
};

void Bass::setText(string txt){
	text = txt;
}

string Bass::getText(){
	return text;
}

class SonClass:Bass
{
	public :
		void setText1(string txt);
		string getText1(void);
};

void SonClass::setText1(string txt){
	text1 = txt;
}

string SonClass::getText1(){
	return text1;
}

int main(){
	Box Box1;        // ���� Box1������Ϊ Box
	Box Box2;        // ���� Box2������Ϊ Box
	double volume = 0.0;     // ���ڴ洢���

	// box 1 ����
	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.breadth = 7.0;

	// box 2 ����
	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.breadth = 13.0;

	// box 1 �����
	volume = Box1.height * Box1.length * Box1.breadth;
	cout << "Box1 �������" << volume << endl;

	// box 2 �����
	volume = Box2.height * Box2.length * Box2.breadth;
	cout << "Box2 �������" << volume << endl;

	cout << "Box1 �������" << Box1.TestFunciton() << endl;
	cout << "Box2 �������" << Box2.TestFunciton() << endl;

	Bass bass;
	bass.setText("suibian");
	cout << "bassText��" << bass.getText() << endl;

	SonClass sonClass;
	sonClass.setText1("sonText");
	cout << "sonClass��" << sonClass.getText1() << endl;

	system("PAUSE");
	return 0;
}

