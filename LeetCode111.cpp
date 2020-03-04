/*************************************************************************
	> File Name: LeetCode111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 22时39分57秒
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
int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int l = minDepth(root->left), r = minDepth(root->right);
    if (root->left == NULL || root->right == NULL) return (l > r ? l : r) + 1;
    return (l > r ? r : l) + 1;
}
*/
int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    if (root->left == NULL || root->right == NULL) {
        return minDepth(root->left ? root->left : root->right) + 1;
    }
    return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}
