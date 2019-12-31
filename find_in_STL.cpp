#include <iostream>
#include <vector>
#include <algorithm>
/*
*
* C++ STL 库中 find() 函数使用 简单示例
*
*/
using std::vector;
using std::cout;
using std::endl;
int main() {
	vector<int> nums = {2,7,8,8,9};
	int target = 8;
	vector<int>::iterator loc = find(nums.begin(), nums.end(), target);

	if (loc == nums.end()) {
		cout << "数组中没有" << target << endl;	
	}
	else {
		cout << "数组中有" << target << endl;
		cout << "并且, 它的第一次出现的位置为:" << loc - nums.begin() << endl;
	}
}
