//向量容器
//标准库666
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
	std::vector<std::string>::iterator iter = names.begin(); //声明迭代器
	while (iter!=names.end())
	{
		std::cout << *iter << std::endl; //iter 实质是指针
		++iter;
	}
	return 0;
}