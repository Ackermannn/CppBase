//����ģ��
//STL�ⷺ�ͱ��
/*
template<class T>	//T ��һ������
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
	std::cout << "����ǰ��i1=" << i1 << ",i2=" << i2 << std::endl;
	swap(i1, i2);//swap<int>(i1,i2)
	std::cout << "������i1=" << i1 << ",i2=" << i2 << std::endl;

	std::string s1 = "С����";
	std::string s2 = "Сx��";
	std::cout << "����ǰ��i1=" << s1 << ",i2=" << s2 << std::endl;
	swap(s1, s2);//swap<string>(i1,i2)
	std::cout << "������i1=" << s1 << ",i2=" << s2 << std::endl;

}