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
	system("PAUSE");
	return 0;
}