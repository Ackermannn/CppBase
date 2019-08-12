//函数模板
//STL库泛型编程
/*
template<class T>	//T 是一种类型
void foo(T param)
{
	//do something
}
*/
//swap()
#include<iostream>
#include<string>

template<class T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

}




int main() 
{
	int i1 = 100;
	int i2 = 200;
	std::cout << "交换前，i1=" << i1 << ",i2=" << i2 << std::endl;
	swap(i1, i2);//swap<int>(i1,i2)
	std::cout << "交换后，i1=" << i1 << ",i2=" << i2 << std::endl;

	std::string s1 = "小甲鱼";
	std::string s2 = "小x鱼";
	std::cout << "交换前，i1=" << s1 << ",i2=" << s2 << std::endl;
	swap(s1, s2);//swap<string>(i1,i2)
	std::cout << "交换后，i1=" << s1 << ",i2=" << s2 << std::endl;

}