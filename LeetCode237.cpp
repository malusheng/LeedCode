/*************************************************************************
	> File Name: LeetCode237.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 16时53分27秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p;
    node->val = node->next->val;
    p = node->next;
    node->next = p->next;
    free(p);
}
