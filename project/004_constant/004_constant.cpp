#include <iostream>
using namespace std;

#define LENGHT 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
	cout << "Hello\tWorld\n\n";
	int result;
	result = LENGHT * WIDTH;
	cout << result << endl;
	cout << NEWLINE;
	cout << "-------------------------" << endl;
	const int LENGHT1 = 10;
	const int WIDTH1 = 5;
	const char NEWLINE1 = '\n';
	cout << LENGHT1*WIDTH1 << endl;
	cout << NEWLINE1;

	system("PAUSE");
}