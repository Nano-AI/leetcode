/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
	return iterate(root, 0);
}

int iterate(TreeNode* node, int value) {
	if (!node)
		return value;
	int val1 = iterate(node->left, value + 1);
	int val2 = iterate(node->right, value + 1);
	return (val1 >= val2) ? val1 : val2;
}
};