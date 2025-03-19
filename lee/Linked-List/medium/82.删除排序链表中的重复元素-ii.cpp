/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
        ListNode *nHead = new ListNode(-1, head);
        ListNode *p = nHead, *q = head;
        while (q) {
            while (q->next && p->next->val == q->next->val) q = q->next;
            if (p->next != q) p->next = q->next; // q动了，有重复的
            else p = p->next; // q没动，没重复的
            q = q->next;
        }
        return nHead->next;
    }
};
// @lc code=end

