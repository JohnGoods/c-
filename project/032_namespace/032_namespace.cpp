# include <iostream>
using namespace std;

namespace firstNameSpace{
	void func(){
		cout << "firstFun" << endl;
	}
}

namespace secondNameSpace{
	void func(){
		cout << "secondFun" << endl;
	}
}

namespace thirdlyNameSpace{
	void func(){
		cout << "thirdlyFun" << endl;
	}

	namespace fourthlyNameSpace{
		void fun(){
			cout << "fourthlyFun" << endl;
		}
	}
}

int main(){
	firstNameSpace::func();
	secondNameSpace::func();
	thirdlyNameSpace::fourthlyNameSpace::fun();

	system("PAUSE");
	return 0;
}