#include  <iostream>
using namespace std;

//new 和 delete 运算符
//下面是使用 new 运算符来为任意的数据类型动态分配内存的通用语法：
//new data - type;
//在这里，data - type 可以是包括数组在内的任意内置的数据类型，也可以是包括类或结构在内的用户自定义的任何数据类型。
//让我们先来看下内置的数据类型。例如，我们可以定义一个指向 double 类型的指针，然后请求内存，该内存在执行时被分配。我们可以按照下面的语句使用 new 运算符来完成这点：
//double* pvalue = NULL; // 初始化为 null 的指针
//pvalue = new double;   // 为变量请求内存


class Box{
public:
	Box(){
		cout << "调用构造函数" << endl;
	}
	~Box(){
		cout << "调用析构函数" << endl;
	}
};

int main(){
	Box* boxArray = new Box[4];
	// 仅释放了a指针指向的全部内存空间 但是只调用了a[0]对象的析构函数 剩下的从boxArray[1]到boxArray[4]这4个用户自行分配的m_cBuffer对应内存空间将不能释放 从而造成内存泄漏
	delete boxArray;
	// 调用使用类对象的析构函数释放用户自己分配内存空间并且   释放了boxArray指针指向的全部内存空间
	delete[] boxArray;
	system("PAUSE");
	return 0;
}