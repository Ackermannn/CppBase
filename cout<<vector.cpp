#include<iostream>
#include<vector>
/*
* 重构cout 也接受vector<int>类型数据输入
* 例子的输出效果为 [0,1,0,3,12] 
*/
using std::ostream;
using std::vector;
using std::endl;
ostream& operator<<(ostream &os, vector<int>& v) 
{
	os << '[';
	for (auto iter = v.begin(); iter < v.end() - 1; iter++) 
	{
		os << *iter << ',';
	}
	os << *(v.end()-1) << ']';
	return os;
}

int main() {
	vector<int> nums = { 0,1,0,3,12 };
	cout << nums << endl;
	return 0;
}
/* cout << vector<string>
ostream& operator<<(ostream& os, vector<string>& v)
{
	os << '[';
	for (auto iter = v.begin(); iter < v.end() - 1; iter++)
	{
		os << '"' << *iter << "\" ," << endl;
	}
	os << '"' << *(v.end() - 1) << '"'<< ']';
	return os;
}
//输出格式:
//	["as",
//	"fa",
//	"fa"]
*/
