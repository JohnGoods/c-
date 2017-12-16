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

	// ʹ�õ����� iterator ����ֵ
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	system("PAUSE");
	return 0;
}

//push_back() ��Ա������������ĩβ����ֵ������б�Ҫ����չ�����Ĵ�С��
//size() ������ʾ�����Ĵ�С��
//begin() ��������һ��ָ��������ͷ�ĵ�������
//end() ��������һ��ָ������ĩβ�ĵ�������