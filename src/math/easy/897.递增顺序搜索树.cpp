/*
 * @lc app=leetcode.cn id=897 lang=cpp
 *
 * [897] 递增顺序搜索树
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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode dummy(0);
        TreeNode *pre = &dummy;
        
        stack<TreeNode*> s;

        while(root || !s.empty())
        {
            while(root)
            {
                s.push(root);
                root = root->left;
            }

            root = s.top();
            s.pop();

            pre->right = root;
            pre = root;

            root->left = nullptr;
            root = root->right;
        }
        return dummy.right;
    }
};
// @lc code=end

