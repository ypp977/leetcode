/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
    ListNode *detectCycle(ListNode *head) {
        // （1）哈希表
        // unordered_set<ListNode*> node;
        // while (head) {
        //     if (node.count(head)) return head;
        //     node.insert(head);
        //     head = head->next;
        // }
        // return NULL;

        /* （2）快慢指针
        初次相遇点为环(y + z)上的某一点c，快慢指针初次走到相遇点的距离:
        slow = x + y
        fast = x + n(y + z) + y
        2倍速的慢指针 = 1倍速的快指针:
        2(x + y) = x + y + n(y + z)
        x + y = n(y + z) = (n - 1)(y + z) + y + z
        x = (n - 1)(y + z) + z
        => x = z
        => 起点到环入口的距离 = 初次相遇点到环入口的距离，
        所以得到初次相遇点后把两个指针分别放到起点和初次相遇点，它们相遇的点即环入口
        */
        ListNode *s = head, *f = head;
        do {
            if (!f || !f->next) return NULL;
            s = s->next, f = f->next->next;
        } while (s != f);
        s = head;
        while (s != f) {
            s = s->next, f = f->next;
        }
        return s;
    }
};
// @lc code=end

