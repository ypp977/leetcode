/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // （1）直接算长度
        // ListNode *newHead = new ListNode(-1, head);
        // ListNode *p = head;
        // int len = 0;
        // while (p) len++, p = p->next;
        // if (n > len) return NULL;

        // p = newHead, len -= n;
        // while (len--) p = p->next;
        // p->next = p->next->next;

        // return newHead->next;

        // （2）快慢指针
        ListNode *newNode = new ListNode(-1, head);
        ListNode *s = newNode, *f = newNode;
        while (n--) {
            if (!f) return NULL;
            f = f->next;
        }
        while (f && f->next) {
            s = s->next, f = f->next;
        }
        s->next = s->next->next;
        return newNode->next;
    }
};
// @lc code=end

