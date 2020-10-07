#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <deque>

using std::string;
using std::vector;
using std::nullptr_t;

//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode() : val(0), left(NULL), right(NULL) {}
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

	static TreeNode* creatBitTree(vector<string> nums);

	static void printBitTree(TreeNode* root);
};

std::ostream& operator<<(std::ostream & os, TreeNode * root);
