//   https://www.bilibili.com/video/av7595819/?p=36
// �Ľ�
#include<iostream>
#include<cstdlib>
int fun(int x, int y);

int main()
{
	int i, a, b;
	int (*p)(int, int);	//����ָ��...

	std::cout << "input number��" << std::endl;
	std::cin>>a;

	p = fun;			//������ָ��p��ֵ��ʹ��ָ����

	for (i = 0; i < 10; i++) 
	{
		std::cout << "input number��" << (b = rand() % 100) << std::endl;

		a = (*p)(a, b);	//ͨ��ָ��p���ú���
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