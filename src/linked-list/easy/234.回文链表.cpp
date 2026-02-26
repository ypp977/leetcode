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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* pre = nullptr;
        while(head)
        {
            ListNode* next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
    ListNode* findMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
        {
            return true;
        }
        ListNode* mid = findMid(head);
        ListNode* secondStart = reverseList(mid);

        ListNode* firstStart = head;
        ListNode* secondEnd = secondStart;
        bool res = true;

        while (res && secondEnd)
        {
            if(firstStart->val != secondEnd->val)
            {
                res = false;
            }
            firstStart = firstStart->next;
            secondEnd = secondEnd->next;
        }
        firstStart = reverseList(secondStart);
        return res;
    }
};
// @lc code=end

