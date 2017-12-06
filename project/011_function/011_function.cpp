#include <iostream>
using namespace std;
/*
return_type function_name(parameter list)
{
	body of the function
}

1.�������ͣ�һ���������Է���һ��ֵ��return_type �Ǻ������ص�ֵ���������͡���Щ����ִ������Ĳ�����������ֵ������������£�return_type �ǹؼ��� void��
2.�������ƣ����Ǻ�����ʵ�����ơ��������Ͳ����б�һ�𹹳��˺���ǩ����
3.����������������ռλ����������������ʱ�������������һ��ֵ�����ֵ����Ϊʵ�ʲ����������б�����������������͡�˳�������������ǿ�ѡ�ģ�Ҳ����˵���������ܲ�����������
4.�������壺�����������һ�鶨�庯��ִ���������䡣
*/

/*
Lambda�������﷨�������£�

[capture](parameters) mutable ->return-type{ statement }

1.[capture]����׽�б���׽�б����ǳ����� lambda ���ʽ�Ŀ�ʼ������ʵ�ϣ�[] �� lambda �����������������ݸ��������жϽ������Ĵ����Ƿ��� lambda ��������׽�б��ܹ���׽�������еı����� lambda ����ʹ�á�
2.(parameters)�������б�����ͨ�����Ĳ����б�һ�¡��������Ҫ�������ݣ��������ͬ���� () һ��ʡ�ԡ�
3.mutable��mutable ���η���Ĭ������£�lambda ��������һ�� const ������mutable ����ȡ���䳣���ԡ���ʹ�ø����η�ʱ�������б���ʡ�ԣ���ʹ����Ϊ�գ���
4.->return_type���������͡���׷�ٷ���������ʽ���������ķ������͡����ڷ��㣬����Ҫ����ֵ��ʱ��Ҳ������ͬ���� -> һ��ʡ�ԡ����⣬�ڷ���������ȷ������£�Ҳ����ʡ�Ըò��֣��ñ������Է������ͽ����Ƶ���
5.{statement}�������塣��������ͨ����һ�����������˿���ʹ�ò���֮�⣬������ʹ�����в���ı�����
6.�� lambda �����Ķ���ʽ�У������б�ͷ������Ͷ��ǿ�ѡ���֣�����׽�б�ͺ����嶼����Ϊ�գ�

C++ ����򵥵� lambda ����ֻ��Ҫ����Ϊ��
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