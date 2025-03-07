/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c)
        {
            return mat;
        }

        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < m;i++)
        {
            for (int j = 0; j < n;j++)
            {
                int k = i * n + j;
                res[k / c][k % c] = mat[i][j];
            }
        }
        return res;
    }
};
// @lc code=end

