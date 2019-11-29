#include<iostream>
#include<vector>
using std::vector;
using std::cout;
//Definition for singly-linked list.
struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* getListNode(vector<int> nums) {
	/*
	* 函数功能:
	*	输入 数组 生成 线性链表
	* 例子:
	*   输入: nums = { 4,5,1,9 }
	*   输出: 4->5->1->9 
	*/
	ListNode* temp = new ListNode(nums[0]);
	ListNode* h = new ListNode(0);
	h = temp;

	for (int i = 1; i < nums.size(); i++) {
		ListNode* new_one = new ListNode(nums[i]); // 申请动态内存分配,否则被压栈从而无法导出整个链表
		temp->next = new_one;
		temp = new_one;
	}
	return h;
}
/*
int main() {
	vector<int> nums = { 4,5,1,9 };
	auto h = getListNode(nums);
	return 0;

}
*/