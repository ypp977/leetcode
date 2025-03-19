/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // （1）迭代，归并的思路
        // ListNode *head = new ListNode(-1);
        // ListNode *cur = head;
        // while (list1 && list2) {
        //     if (list1->val <= list2->val) {
        //         cur->next = list1;
        //         list1 = list1->next;
        //     } else {
        //         cur->next = list2;
        //         list2 = list2->next;
        //     }
        //     cur = cur->next;
        // }
        // if (list1) cur->next = list1;
        // else if (list2) cur->next = list2;

        // return head->next;

        // （2）递归
        if (!list1) return list2;
        if (!list2) return list1;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                list1->next = mergeTwoLists(list1->next, list2);
                return list1;
            } else {
                list2->next = mergeTwoLists(list2->next, list1);
                return list2;
            }
        }
        return list1;
    }
};
// @lc code=end

