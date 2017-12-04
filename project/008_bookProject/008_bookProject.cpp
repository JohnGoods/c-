#include <iostream>;
#include "Sales_item.h"	//引入头文件
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
				//打印一本书的结果
				cout << total << endl;
				total = trans;	//total现在表示下一本数的销售额
			}
		}
		cout << total << endl;
	}
	else{
		//没有输入,警告读者
		cerr << "No data?!" << endl;
		return -1;
	}
	system("PAUSE");
	return 0;
}