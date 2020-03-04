/*************************************************************************
	> File Name: LeetCode112.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 22时41分38秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/*
bool hasPathSum(struct TreeNode* root, int sum){
    if (!root) return false;
    sum = sum - root->val;
    if (!root->left && !root->right && !sum) return true;
    return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
}
*/
bool hasPathSum(struct TreeNode* root, int sum){
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) return root->val == sum;
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}
