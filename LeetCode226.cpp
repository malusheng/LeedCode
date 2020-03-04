/*************************************************************************
	> File Name: LeetCode226.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 22时43分30秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if (root == NULL) return NULL;
    struct TreeNode *p = root->left;
    root->left = root->right;
    root->right = p;
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
