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

	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i] << std::endl;
	}
	return 0;

}