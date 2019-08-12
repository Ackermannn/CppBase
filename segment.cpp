//https://www.bilibili.com/video/av7595819/?p=36
//让函数返回指针
#include<iostream>
int* newInt(int value);
int main() 
{
	int* x = newInt(20);

	std::cout << *x;//虽然是在newInt存放的20 ，却依旧存在
	delete x;
	x = NULL;

	return 0;
}

int* newInt(int value) 
{
	int* myInt = new int; //用new声明一块内存
	*myInt = value;

	return myInt;
}
