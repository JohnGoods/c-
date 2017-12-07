#include <iostream>
#include <string>
using namespace std;


class Line{
public:
	Line();
	~Line();	//析构
};

//:: 叫作用域区分符，指明一个函数属于哪个类或一个数据属于哪个类。
//::可以不跟类名，表示全局数据或全局函数（即非成员函数）

Line::Line(){
	cout << "Object is being created" << endl;
}

Line::~Line(){
	cout << "Object is being deleted" << endl;
}

//这段代码等同 length = len;
//Line::Line(double len) : length(len)
//{
//	cout << "Object is being created, length = " << len << endl;
//}

int main(){
	Line line;
	system("PAUSE");	//要看析构的输出 需要注释此句
	return 0;
}