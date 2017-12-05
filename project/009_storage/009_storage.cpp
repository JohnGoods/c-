#include <iostream>

//函数声明
void func(void);
static int count = 10;	/* 全局变量 */	// static 存储区域：内存的数据区  ( 在程序开始时就分配了固定的内存,程序结束时才释放内存 ）

int main(){
	while (count--)
	{
		func();
	}
	system("PAUSE");
	return 0;
}

// 函数定义
void func(void)
{
	static int i = 5; // 局部静态变量
	i++;
	std::cout << "变量 i 为 " << i;
	std::cout << " , 变量 count 为 " << count << std::endl;
}
