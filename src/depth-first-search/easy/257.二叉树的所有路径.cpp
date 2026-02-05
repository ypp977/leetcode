/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    void helper(TreeNode *root, vector<string> &path, string curr)
    {
        if(nullptr == root)
        {
            return;
        }

        if(nullptr == root->left && nullptr == root->right)
        {
            curr += to_string(root->val);
            path.push_back(curr);
        }
        else
        {
            curr += to_string(root->val) + "->";
            helper(root->left, path, curr);
            helper(root->right, path, curr);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> path;
        string curr = "";
        helper(root, path, curr);
        return path;
    }
};
// @lc code=end

