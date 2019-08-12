//https://www.bilibili.com/video/av7595819/?p=36

#include<iostream>
void swap(int* x, int* y);
int main() 
{
	int a, b;
	a = 3;
	b = 5;

	swap(&a, &b);  //绕开局部变量的限制
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;

	return 0;
}
void swap(int* x, int* y) 
{
#if 0//可以注释一块代码
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
#endif
	*x ^= *y;//异或交替实现交换的方法
	*y ^= *x;
	*x ^= *y;

	//此时swap函数不能返回指针，除非使用new delete
}