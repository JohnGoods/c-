#include <iostream>;
#include "Sales_item.h"	//����ͷ�ļ�
using namespace std;

int main(){
	Sales_item total;
	if (cin >> total){
		Sales_item trans;
		while (cin>>trans)
		{
			if(total.isbn() == trans.isbn()){
				total += trans;
			}
			else{
				//��ӡһ����Ľ��
				cout << total << endl;
				total = trans;	//total���ڱ�ʾ��һ���������۶�
			}
		}
		cout << total << endl;
	}
	else{
		//û������,�������
		cerr << "No data?!" << endl;
		return -1;
	}
	system("PAUSE");
	return 0;
}