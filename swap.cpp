//https://www.bilibili.com/video/av7595819/?p=36

#include<iostream>
void swap(int* x, int* y);
int main() 
{
	int a, b;
	a = 3;
	b = 5;

	swap(&a, &b);  //�ƿ��ֲ�����������
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;

	return 0;
}
void swap(int* x, int* y) 
{
#if 0//����ע��һ�����
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
#endif
	*x ^= *y;//�����ʵ�ֽ����ķ���
	*y ^= *x;
	*x ^= *y;

	//��ʱswap�������ܷ���ָ�룬����ʹ��new delete
}