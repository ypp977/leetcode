/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] 随机链表的复制
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        // 在每个结点后面插一个和自己的值一样的新结点
        Node *p = head;
        while (p) {
            Node *node = new Node(p->val);
            node->next = p->next;
            p->next = node;
            p = node->next;
        }

        // 用旧结点的random处理新结点的random
        p = head;
        while (p) {
            if (p->random) p->next->random = p->random->next;
            p = p->next->next;
        }

        // 把新链表提取出来并复原原链表
        Node *newHead = head->next;
        p = newHead;
        while (1) {
            head->next = p->next, head = head->next; // 复原原链表
            if (head) {
                p->next = head->next; // 串连新链表
                p = p->next; 
            } else return newHead;
        }

        return newHead->next;
    }
};
// @lc code=end

