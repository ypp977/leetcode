/*
 * @lc app=leetcode.cn id=993 lang=cpp
 *
 * [993] 二叉树的堂兄弟节点
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
    int x_depth,y_depth,x_parent,y_parent;
    bool found_x,found_y;
public:
    void dfs(TreeNode* node,int x,int y,int depth,int parent)
    {
        if(node==nullptr)
        {
            return;
        }

        if(found_x && found_y)
        {
            return;
        }

        if(node->val==x)
        {
            found_x=true;
            x_depth=depth;
            x_parent=parent;
        }
        else if(node->val==y)
        {
            found_y=true;
            y_depth=depth;
            y_parent=parent;
        }

        dfs(node->left,x,y,depth+1,node->val);
        dfs(node->right,x,y,depth+1,node->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        x_depth = -2,y_depth = -1;
        x_parent = y_parent = -1;
        found_x = found_y = false;

        dfs(root, x, y, 0, -1);

        return x_depth==y_depth && x_parent!=y_parent;
    }
};
// @lc code=end

