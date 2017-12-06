#include <iostream>
using namespace std;
/*
return_type function_name(parameter list)
{
	body of the function
}

1.返回类型：一个函数可以返回一个值。return_type 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字 void。
2.函数名称：这是函数的实际名称。函数名和参数列表一起构成了函数签名。
3.参数：参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
4.函数主体：函数主体包含一组定义函数执行任务的语句。
*/

/*
Lambda函数的语法定义如下：

[capture](parameters) mutable ->return-type{ statement }

1.[capture]：捕捉列表。捕捉列表总是出现在 lambda 表达式的开始处。事实上，[] 是 lambda 引出符。编译器根据该引出符判断接下来的代码是否是 lambda 函数。捕捉列表能够捕捉上下文中的变量供 lambda 函数使用。
2.(parameters)：参数列表。与普通函数的参数列表一致。如果不需要参数传递，则可以连同括号 () 一起省略。
3.mutable：mutable 修饰符。默认情况下，lambda 函数总是一个 const 函数，mutable 可以取消其常量性。在使用该修饰符时，参数列表不可省略（即使参数为空）。
4.->return_type：返回类型。用追踪返回类型形式声明函数的返回类型。出于方便，不需要返回值的时候也可以连同符号 -> 一起省略。此外，在返回类型明确的情况下，也可以省略该部分，让编译器对返回类型进行推导。
5.{statement}：函数体。内容与普通函数一样，不过除了可以使用参数之外，还可以使用所有捕获的变量。
6.在 lambda 函数的定义式中，参数列表和返回类型都是可选部分，而捕捉列表和函数体都可能为空，

C++ 中最简单的 lambda 函数只需要声明为：
[]{};
*/


int result(int, int);
int result1(int num1, int num2);

int result(int num1, int num2){
  int numResult = 0;
  if (num1 != NULL && num2 != NULL){
	  return num1 + num2;
  }
  else{
	  cout << "num1 or num2 is null....";
	  return 0;
  }
}

int result1(int num1 = 0, int num2 = 0){
	int numResult = 0;
	if (num1 != NULL && num2 != NULL){
		return num1 + num2;
	}
	else{
		cout << "num1 or num2 is null...." << endl;
		return 0;
	}
}

int main(){
   int num = result(1, 2);
   cout << "num is ......" << num << endl;

   int num1 = result1(1);
   cout << "num1 is ......" << num1 << endl;

   auto lamberda = [](int num1, int num2)->int{return num1 + num2; };
   int num2 = lamberda(100, 200);
   cout << "num2 is ......" << num2 << endl;

   system("PAUSE");
   return 0;
}