//��������
//��׼��666
#include<iostream>
#include<string>
#include<vector>
int main()
{
	std::vector<std::string> names;
	names.push_back("xiajiayu");
	names.push_back("xiaoyouyu");
	/*
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << std::endl;
	}*/
	std::vector<std::string>::iterator iter = names.begin(); //����������
	while (iter!=names.end())
	{
		std::cout << *iter << std::endl; //iter ʵ����ָ��
		++iter;
	}
	return 0;
}