#include <iostream>
using namespace std;

class Line
{
public:
	Line();
	~Line();
	friend void FrendFunction(Line line);
	int LineLenght(void);
private:

};

void FrendFunction(Line line){
	cout << "I,m Freind..."<< endl;
}

Line::Line()
{
	cout << "Line...struct:" << endl;
}

Line::~Line()
{
}

int Line::LineLenght()
{
	return 100;
}


int main(){
	Line line;
	FrendFunction(line);

	system("PAUSE");
	return 0;
}