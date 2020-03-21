/*
* 自编写的快排程序
* 2020/3/21 15:28:00 
* <<算法图解>>的动手练习
*/
#include<iostream>
#include<vector>

using std::vector;
using std::cout;
class Solution{
public:
	vector<int> qsort(vector<int> arr){
		int size = arr.size();
		if (size <= 1) // 基准条件
			return arr;
		else if (size == 2) { // 基准条件
			if (arr[1] < arr[0]) std::swap(arr[0],arr[1]);
			return arr;
		}
		else {
			int mid = size / 2; // 取数组的中间作为基准值
			vector<int> left, right;
			for (int i = 0; i < size;i++) {
				if (i == mid) continue;
				if (arr[i] <= arr[mid]) left.push_back(arr[i]);  // 找比基准值小的
				else right.push_back(arr[i]);  // 找比基准值大的
				
			}
			// left + 基准值 + right 合并
			vector<int> qleft, qright;
			qleft = qsort(left);
			qleft.push_back(arr[mid]);
			qright = qsort(right);

			qleft.insert(qleft.end(), qright.begin(), qright.end());
			return qleft;
		}
	}
};
int main() {
	vector<int> arr = { 9,8,5,9,8,1,2,6,5 };
	Solution solv;

	auto ans = solv.qsort(arr);

	for (int x : ans) {
		cout << " " << x ;
	}


}