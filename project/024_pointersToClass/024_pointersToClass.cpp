#include <iostream>
using namespace std;

class Box
{
public:
	Box(double l = 2.0, double b = 2.0, double h = 2.0){
		lenght = l;
		breadth = b;
		height = h;
	};

	double Volue(void){
		return lenght*breadth*height;
	}

	int Result(Box box){
		return this->Volue() > box.Volue();
	}


private:
	double lenght;
	double breadth;
	double height;
};

int main(){
	Box box1(4, 2, 3);
	Box box2(1, 2, 3);

	Box *preBox;
	preBox = &box1;

	if (preBox->Result(box2)){
		cout << "Box2 is smaller than Box1" << endl;
	}
	else{
		cout << "Box2 is equal to or larger than Box1" << endl;
	}
	system("PAUSE");
	return 0;
}