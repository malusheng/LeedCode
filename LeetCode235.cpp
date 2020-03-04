/*************************************************************************
	> File Name: LeetCode235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年03月04日 星期三 22时44分39秒
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
//method:1
struct TreeNode *__lowestCommonAncestor(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
    if (root->val == p->val) return p;
    if (root->val == q->val) return q;
    if (root->val > p->val && root->val < q->val) return root;
    if (p->val > root->val) return __lowestCommonAncestor(root->right, p, q);
    return __lowestCommonAncestor(root->left, p, q);
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL) return NULL;
    if (p->val == q->val) return p;
    if (p->val > q->val) {
        struct TreeNode *temp = p;
        p = q;
        q = temp;
    }
    return __lowestCommonAncestor(root, p, q);
}
*/

/*
//method:2
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL) return NULL;
    if ((root->val - p->val) * (root->val - q->val) <= 0) return root;
    if (root->val - p->val > 0) return lowestCommonAncestor(root->left, p, q);
    else return lowestCommonAncestor(root->right, p, q);
}
*/


//method:3
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);
    else if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
    return root;
}
