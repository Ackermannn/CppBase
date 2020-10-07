#include "TreeNode.h"
using std::deque;
/*
    根据 nums 数组生成二叉树

	例子如下：

	vector<string> nums = { "45","NULL","2","-2" };
	TreeNode* tn = TreeNode::creatBitTree(nums);

	      45
    	    \
			2
           /
         -2


	nums 是 层序遍历出来的二叉树。数字是string类型的 空使用"NULL"标记

*/
TreeNode* TreeNode::creatBitTree(vector<string> nums)
{
	if (nums.size() == 0 || nums[0] == "NULL") return NULL;
	
	TreeNode* root = new TreeNode(stoi(nums[0]));
	if (nums.size() == 1) return root;

	deque<TreeNode*> dp; // 队列
	dp.push_back(root);

	TreeNode* temp;

	for (int i = 1; i < nums.size();) {
		temp = dp.front();
		dp.pop_front();
	
		if (nums[i] != "NULL") {
			temp->left = new TreeNode(stoi(nums[i]));
			dp.push_back(temp->left);
		}
		i++;

		if (i >= nums.size()) break;

		if (nums[i] != "NULL") {
			temp->right = new TreeNode(stoi(nums[i]));
			dp.push_back(temp->right);
		}
		i++;


	}


	return root;
}

void TreeNode::printBitTree(TreeNode* root) {
	
	if (root != NULL) {
		std::cout << root->val << ",";
		printBitTree(root->left);
		printBitTree(root->right);
		
	}

}

std::ostream& operator<<(std::ostream& os, TreeNode* root)
{
	TreeNode::printBitTree(root);
	return os;
}
