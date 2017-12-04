#include <iostream>
using namespace std;


enum time
{
	first, second,
	third, forth, fifth
};

int main(){
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	/**Size of char : 1
	Size of int : 4
	Size of short int : 2
	Size of long int : 8
	Size of float : 4
	Size of double : 8
	Size of wchar_t : 4**/

	
	enum time day = first;
	switch (day){
	case first:
		cout << "first" << endl;
		break;
	case second:
		cout << "second" << endl;
		break;
	default:
		cout << "other" << endl;
		break;
	}
	system("PAUSE");
	return 0;
}