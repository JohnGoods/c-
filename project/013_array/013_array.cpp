#include <iostream>
using namespace std;
#include <iomanip>
//iomanip��c++�������澭��������io�������������manip��manipulator��������������д(��c++��ֻ��ͨ��������д����Ч����
using std::setw;
#include <vector>

int main(){
	int n[10] = {};
	for (int i = 0; i < 10; i++){
		n[i] = i;
	}
	cout << "Element" << setw(13) << "Value" << endl;
	// ���������ÿ��Ԫ�ص�ֵ                     
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;	//setw(int n)��������������,��n-1���ո�
	}

	//Array �ǹ̶���С�ģ����ܶ�������Ԫ��.�������붨�岻�̶���С���ַ�ʱ,����ʹ�� vector(����) ��׼�⡣
	vector<int> vec;
	int j = 0;
	for (int i = 0; i < 10; i++){
		vec.push_back(i);
	}
	// ��ʾ׷�Ӻ� vec �Ĵ�С
	cout << "extended vector size = " << vec.size() << endl;

	system("PAUSE");
	return 0;

	/*
	��̬ int array[100]; �������������� array����δ��������г�ʼ��
	��̬ int array[100] = { 1��2 }���������岢��ʼ�������� array
	��̬ int* array = new int[100]; delete[]array;���������˳���Ϊ 100 ������ array
	��̬ int* array = new int[100](1��2); ��delete[]array;��Ϊ����Ϊ100������array��ʼ��ǰ����Ԫ��
	*/
}
