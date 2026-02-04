/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getDepth(TreeNode* root) {
        if (!root)
        {
            return 0;
        }

        int leftH = getDepth(root->left);
        if(-1 == leftH)
        {
            return -1;
        }

        int rightH = getDepth(root->right);
        if(-1 == rightH)
        {
            return -1;
        }
        if(abs(leftH - rightH) > 1)
        {
            return -1;
        }

        return max(leftH, rightH) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return getDepth(root) != -1;
    }
};
// @lc code=end

