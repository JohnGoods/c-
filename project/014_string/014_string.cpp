#include <iostream>
#include <string>
using namespace std;

//C++ ���д����ĺ������������� null ��β���ַ�����supports a wide range of functions that manipulate null-terminated strings
//1	strcpy(s1, s2);
//�����ַ��� s2 ���ַ��� s1��
//2	strcat(s1, s2);
//�����ַ��� s2 ���ַ��� s1 ��ĩβ��
//3	strlen(s1);
//�����ַ��� s1 �ĳ��ȡ�
//4	strcmp(s1, s2);
//��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�ֵС�� 0����� s1>s2 �򷵻�ֵ���� 0��
//5	strchr(s1, ch);
//����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�
//6	strstr(s1, s2);
//����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�

//vs׼������strcpy�ģ���ȫ�Խϵͣ�����΢���ṩ��strcpy_s�����棬
//����������ʹ��strcpy�ģ�mainǰ�����#pragma warning(disable:4996)����
#pragma warning(disable:4996)

int main(){
	//char��	
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o' };	//Ĭ�������null
	cout << "Greeting message: ";
	cout << greeting << endl;

	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int len;

	// ���� str1 �� str3
	strcpy(str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// ���� str1 �� str2
	strcat(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	//���Ӻ�str1 ���ܳ���
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;

	//string��
	string str11 = "Hello";
	string str22 = "World";
	string str33;
	int  len1;

	// ���� str1 �� str3
	str33 = str11;
	cout << "str33 : " << str33 << endl;

	// ���� str1 �� str2
	str33 = str11 + str22;
	cout << "str11 + str22 : " << str33 << endl;

	// ���Ӻ�str3 ���ܳ���
	len1 = str33.size();
	cout << "str33.size() :  " << len1 << endl;

	system("PAUSE");
	return 0;
}