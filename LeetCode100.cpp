/*************************************************************************
	> File Name: LeetCode100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月29日 星期六 21时09分17秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
   if (p == NULL && q == NULL) return true;
   if (p == NULL || q == NULL) return false;
   if (p->val - q->val) return false;
   return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
