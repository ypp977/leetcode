/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        auto *p = head, *q = head;
        while (q) {
            while (q->next && p->val == q->next->val) q = q->next;
            if (p != q) p->next = q->next; // q动了，有重复的
            p = p->next, q = q->next;
        }
        return head;
    }
};
// @lc code=end

