#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

//ģ���Ƿ��ͱ�̵Ļ��������ͱ�̼���һ�ֶ������κ��ض����͵ķ�ʽ��д���롣
//ģ���Ǵ����������������ͼ��ʽ����������������������㷨�����Ƿ��ͱ�̵����ӣ����Ƕ�ʹ����ģ��ĸ��
//ÿ����������һ����һ�Ķ��壬���� ���������ǿ��Զ�����಻ͬ���͵����������� vector <int> �� vector <string>��

//template <class type> class class - name{
//	.
//	.
//	.
//}
//�����type ��ռλ���������ƣ��������౻ʵ������ʱ�����ָ����������ʹ��һ�����ŷָ����б���������������������

template <class T>
class Stack {
private:
	vector<T> elems;     // Ԫ�� 

public:
	void push(T const&);  // ��ջ
	void pop();               // ��ջ
	T top() const;            // ����ջ��Ԫ��
	bool empty() const{       // ���Ϊ���򷵻��档
		return elems.empty();
	}
};

template <class T>
void Stack<T>::push(T const& elem)
{
	// ׷�Ӵ���Ԫ�صĸ���
	elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::pop(): empty stack");
	}
	// ɾ�����һ��Ԫ��
	elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
	if (elems.empty()) {
		throw out_of_range("Stack<>::top(): empty stack");
	}
	// �������һ��Ԫ�صĸ��� 
	return elems.back();
}

int main()
{
	try {
		Stack<int>         intStack;  // int ���͵�ջ 
		Stack<string> stringStack;    // string ���͵�ջ 

		// ���� int ���͵�ջ 
		intStack.push(7);
		cout << intStack.top() << endl;

		// ���� string ���͵�ջ 
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