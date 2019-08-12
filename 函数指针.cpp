//   https://www.bilibili.com/video/av7595819/?p=36
// 改进
#include<iostream>
#include<cstdlib>
int fun(int x, int y);

int main()
{
	int i, a, b;
	int (*p)(int, int);	//函数指针...

	std::cout << "input number：" << std::endl;
	std::cin>>a;

	p = fun;			//给函数指针p赋值，使他指向函数

	for (i = 0; i < 10; i++) 
	{
		std::cout << "input number：" << (b = rand() % 100) << std::endl;

		a = (*p)(a, b);	//通过指针p调用函数
	}
	std::cout << "The Max Number is:" << a << std::endl;
	
	return 0;
}
 int fun(int x, int y)
{
	int z;
	z = (x > y) ? x : y;
	return z;
}