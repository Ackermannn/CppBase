//https://www.bilibili.com/video/av7595819/?p=36
//�ú�������ָ��
#include<iostream>
int* newInt(int value);
int main() 
{
	int* x = newInt(20);

	std::cout << *x;//��Ȼ����newInt��ŵ�20 ��ȴ���ɴ���
	delete x;
	x = NULL;

	return 0;
}

int* newInt(int value) 
{
	int* myInt = new int; //��new����һ���ڴ�
	*myInt = value;

	return myInt;
}
