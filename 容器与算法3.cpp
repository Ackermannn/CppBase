//��������
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<std::string> names;
	names.push_back("Larry");
	names.push_back("Rola");
	names.push_back("DingDing");
	names.push_back("Joy");
	names.push_back("Michael");
	names.push_back("Lucy");
	names.push_back("Lilei");
	std::sort(names.begin(), names.end());
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