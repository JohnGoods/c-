#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> vec;	
	cout << "vec.size->" << vec.size() << endl;

	for (int i = 0; i < 5; i++){
		vec.push_back(i);
	}
	cout << "vec.size->" << vec.size() << endl;

	for (int i = 0; i < 5; i++){
		cout << i << "vec[]--->" << vec[i] << endl;
	}

	// 使用迭代器 iterator 访问值
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	system("PAUSE");
	return 0;
}

//push_back() 成员函数在向量的末尾插入值，如果有必要会扩展向量的大小。
//size() 函数显示向量的大小。
//begin() 函数返回一个指向向量开头的迭代器。
//end() 函数返回一个指向向量末尾的迭代器。