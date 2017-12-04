#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	for (int i = 0; i < 10; ++i){
		sum += i;
	}
	cout << "Sum of 1 to 10 inclusive is" << sum << endl;
	system("PAUSE");
	return 0;
}