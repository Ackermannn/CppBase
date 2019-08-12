//向量容器
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
	std::vector<std::string>::iterator iter = names.begin(); //声明迭代器
	while (iter!=names.end())
	{
		std::cout << *iter << std::endl; //iter 实质是指针
		++iter;
	}
	return 0;
}