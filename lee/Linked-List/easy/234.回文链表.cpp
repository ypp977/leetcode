/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    ListNode * reverseList(ListNode *head) {
        ListNode *p = NULL, *q = head;
        while (head) {
            q = q->next;
            head->next = p;
            p = head, head = q;
        }
        return p;
    }
    ListNode * findMid(ListNode *head) {
        ListNode *s = head, *f = head;
        while (f && f->next) {
            s = s->next;
            f = f->next->next;
        }
        return s;
    }
    bool isPalindrome(ListNode* head) {
        // （1）转成数组
        // vector<int> v;
        // while (head) {
        //     v.emplace_back(head->val);
        //     head = head->next;
        // }
        // for (int i = 0, j = v.size() - 1; i < j; i++, j--) {
        //     if (v[i] != v[j]) return false;
        // }
        // return true;

        // （2）反转
        ListNode *midNode = findMid(head);
        ListNode *head2 = reverseList(midNode);
        while (head2) {
            if (head->val != head2->val) return false;
            head = head->next, head2 = head2->next;
        }
        return true;
    }
};
// @lc code=end

