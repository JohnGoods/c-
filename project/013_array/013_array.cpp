#include <iostream>
using namespace std;
#include <iomanip>
//iomanip在c++程序里面经常见到，io代表输入输出，manip是manipulator（操纵器）的缩写(在c++上只能通过输入缩写才有效。）
using std::setw;
#include <vector>

int main(){
	int n[10] = {};
	for (int i = 0; i < 10; i++){
		n[i] = i;
	}
	cout << "Element" << setw(13) << "Value" << endl;
	// 输出数组中每个元素的值                     
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;	//setw(int n)用来控制输出间隔,（n-1个空格）
	}

	//Array 是固定大小的，不能额外增加元素.当我们想定义不固定大小的字符时,可以使用 vector(向量) 标准库。
	vector<int> vec;
	int j = 0;
	for (int i = 0; i < 10; i++){
		vec.push_back(i);
	}
	// 显示追加后 vec 的大小
	cout << "extended vector size = " << vec.size() << endl;

	system("PAUSE");
	return 0;

	/*
	静态 int array[100]; 　　定义了数组 array，并未对数组进行初始化
	静态 int array[100] = { 1，2 }；　　定义并初始化了数组 array
	动态 int* array = new int[100]; delete[]array;　　分配了长度为 100 的数组 array
	动态 int* array = new int[100](1，2); 　delete[]array;　为长度为100的数组array初始化前两个元素
	*/
}
