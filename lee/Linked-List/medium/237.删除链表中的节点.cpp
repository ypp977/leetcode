/*
 * @lc app=leetcode.cn id=237 lang=cpp
 *
 * [237] 删除链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // （1）覆盖掉原先的结点，局限性: 不能删尾结点
        *node = *node->next; 

        // （2）可删尾结点版本（给了头结点和要删的结点的值）
        // if (head->val == val) return head->next;
        // auto *p = head, *q = head;
        // while (q->next) {
        //     q = q->next;
        //     if (q->val == val) p->next = q->next;
        //     p = p->next;
        // }
        // return head;
    }
};
// @lc code=end

