#include <iostream>
#include <ctime> //���ñ�׼��
using namespace std;

#pragma warning(disable:4996)
int main(){
	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);		//ʱ���
	cout << "now��" << now << endl;

	tm *ltm = localtime(&now);

	// ��� tm �ṹ�ĸ�����ɲ���
	cout << "��: " << 1900 + ltm->tm_year << endl;
	cout << "��: " << 1 + ltm->tm_mon << endl;
	cout << "��: " << ltm->tm_mday << endl;
	cout << "ʱ��: " << ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;

	system("PAUSE");
	return 0;
}