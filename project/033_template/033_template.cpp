#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

//模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码。
//模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器和算法，都是泛型编程的例子，它们都使用了模板的概念。
//每个容器都有一个单一的定义，比如 向量，我们可以定义许多不同类型的向量，比如 vector <int> 或 vector <string>。

//template <class type> class class - name{
//	.
//	.
//	.
//}
//在这里，type 是占位符类型名称，可以在类被实例化的时候进行指定。您可以使用一个逗号分隔的列表来定义多个泛型数据类型

template <class T>
class Stack {
private:
	vector<T> elems;     // 元素 

public:
	void push(T const&);  // 入栈
	void pop();               // 出栈
	T top() const;            // 返回栈顶元素
	bool empty() const{       // 如果为空则返回真。
		return elems.empty();
	}
};

template <class T>
void Stack<T>::push(T const& elem)
{
	// 追加传入元素的副本
	elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}
	// 删除最后一个元素
	elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}
	// 返回最后一个元素的副本 
	return elems.back();
}

int main()
{
	try {
		Stack<int>         intStack;  // int 类型的栈 
		Stack<string> stringStack;    // string 类型的栈 

		// 操作 int 类型的栈 
		intStack.push(7);
		cout << intStack.top() << endl;

		// 操作 string 类型的栈 
		stringStack.push("hello");
		cout << stringStack.top() << std::endl;
		stringStack.pop();
		stringStack.pop();
		system("PAUSE");
	}
	catch (exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		system("PAUSE");
		return -1;
	}
}