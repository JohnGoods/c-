#include <iostream>
using namespace std;

extern int a, b;
extern int c;
extern float f;

int main(){
	int a, b;
	int c;
	float f;
	a = 10;
	b = 20;
	c = a + b;
	cout << "c---->" << c << endl;
	f = 10.0 / 40.0;
	cout << "f---->" << f << endl;
	system("PAUSE");
}