/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        if(!root)
        {
            return true;
        }
        return isSymmetricTest(root->left, root->right);
    }

    bool isSymmetricTest(TreeNode* left, TreeNode* right)
    {
        if(!left && !right)
        {
            return true;
        }
        else if(!left || !right)
        {
            return false;
        }
        else if (left->val != right->val)
        {
            return false;
        }
        

        return isSymmetricTest(left->left, right->right) && isSymmetricTest(left->right, right->left);
    }
};
// @lc code=end

