#include <iostream>
#include <string>
using namespace std;


class Line{
public:
	Line();
	~Line();	//����
};

//:: �����������ַ���ָ��һ�����������ĸ����һ�����������ĸ��ࡣ
//::���Բ�����������ʾȫ�����ݻ�ȫ�ֺ��������ǳ�Ա������

Line::Line(){
	cout << "Object is being created" << endl;
}

Line::~Line(){
	cout << "Object is being deleted" << endl;
}

//��δ����ͬ length = len;
//Line::Line(double len) : length(len)
//{
//	cout << "Object is being created, length = " << len << endl;
//}

int main(){
	Line line;
	system("PAUSE");	//Ҫ����������� ��Ҫע�ʹ˾�
	return 0;
}