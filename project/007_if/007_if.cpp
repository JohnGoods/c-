#include <iostream>
using namespace std;

int main(){
	int currvalue = 0, value = 0;
	if (cin >> currvalue){
		int count = 1;
		while (cin>>value)
		{
			if (value == currvalue){
				++count;
			}
			else{
				cout << currvalue << "occurs" << count << "tunes" << endl;
				currvalue = value;
				count = 1;
			}
		}
	}
	

	//三目运算嵌套
	/*int a, b, c, d, max;
	cout << "请输入三个数字";
	cin >> a >> b >> c;
	max = (d = a >= b ? a:b) >= c ? d : c;
	cout << "三个数中最大值为" << max;*/
	system("PAUSE");
	return 0;
}