/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // （1）迭代
        // ListNode *p = NULL, *q = head;
        // while (head) {
        //     q = q->next;
        //     head->next = p;
        //     p = head, head = q;
        // }
        // return p;

        // （2）递归
        if (!head || !head->next) return head;
        ListNode *tail = reverseList(head->next);
        head->next->next = head; // 尾结点已经返回，此时是倒数第二个结点
        head->next = NULL;
        return tail; // tail始终是尾结点
    }
};
// @lc code=end

