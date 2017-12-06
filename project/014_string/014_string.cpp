#include <iostream>
#include <string>
using namespace std;

//C++ 中有大量的函数用来操作以 null 结尾的字符串：supports a wide range of functions that manipulate null-terminated strings
//1	strcpy(s1, s2);
//复制字符串 s2 到字符串 s1。
//2	strcat(s1, s2);
//连接字符串 s2 到字符串 s1 的末尾。
//3	strlen(s1);
//返回字符串 s1 的长度。
//4	strcmp(s1, s2);
//如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
//5	strchr(s1, ch);
//返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
//6	strstr(s1, s2);
//返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。

//vs准备弃用strcpy的，安全性较低，所以微软提供了strcpy_s来代替，
//如果你想继续使用strcpy的，main前面加上#pragma warning(disable:4996)即可
#pragma warning(disable:4996)

int main(){
	//char类	
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o' };	//默认最后面null
	cout << "Greeting message: ";
	cout << greeting << endl;

	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int len;

	// 复制 str1 到 str3
	strcpy(str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// 连接 str1 和 str2
	strcat(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	//连接后，str1 的总长度
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;

	//string类
	string str11 = "Hello";
	string str22 = "World";
	string str33;
	int  len1;

	// 复制 str1 到 str3
	str33 = str11;
	cout << "str33 : " << str33 << endl;

	// 连接 str1 和 str2
	str33 = str11 + str22;
	cout << "str11 + str22 : " << str33 << endl;

	// 连接后，str3 的总长度
	len1 = str33.size();
	cout << "str33.size() :  " << len1 << endl;

	system("PAUSE");
	return 0;
}