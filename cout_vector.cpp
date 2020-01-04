#include<iostream>
#include<vector>

//using namespace std;

std::ostream& operator<<(std::ostream& os, std::vector<int>& v) {
	/*
	* 重构cout 也接受vector<int>类型数据输入
	* 例子的输出效果为 [0,1,0,3,12]
	*/
	os << '[';
	for (auto iter = v.begin(); iter < v.end() - 1; iter++)
	{
		os << *iter << ',';
	}
	os << *(v.end() - 1) << ']';
	return os;
}

std::ostream& operator<<(std::ostream& os, std::vector<std::vector<int>>& v) {
	/*
	* 重构cout 也接受vector<vector<int>>类型数据输入
	* 例子的输出效果为
	*	[
	*	[0,1,0],
	*	[3,12],
	*	[1,3]
	*	]
	* 注意必须包含 ostream& operator<<(ostream& os, vector<int>& v)
	*/
	os << "[" << std::endl;
	for (auto iter = v.begin(); iter < v.end() - 1; iter++)
	{
		os << *iter << ',' << std::endl;
	}
	os << *(v.end() - 1) << std::endl;
	os << "]";
	return os;
}

std::ostream& operator<<(std::ostream& os, std::vector<std::string>& v){
/*输出格式:
*	["as",
*	"fa",
*	"fa"]
*/
	os << '[';
	for (auto iter = v.begin(); iter < v.end() - 1; iter++)
	{
		os << '"' << *iter << "\" ," << std::endl;
	}
	os << '"' << *(v.end() - 1) << '"' << ']';
	return os;
}

int main() {
	std::vector<int> nums = { 0,1,0,3,12 };
	std::vector<std::vector<int>> nums2 = { {1,2},{3,4} };
	std::vector<std::string> vs = { "as","gh" };

	std::cout << "nums: " << std::endl << nums << std::endl;
	std::cout << "nums2: " << std::endl << nums2 << std::endl;
	std::cout << "vs: " << std::endl << vs << std::endl;
	return 0;
}
