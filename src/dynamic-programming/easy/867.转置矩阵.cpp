/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
         int rows = matrix.size();
         int cols = matrix[0].size();

         vector<vector<int>> res(cols, vector<int>(rows));

         for(int i = 0; i < rows; i++)
         {
            for(int j = 0; j < cols; j++)
            {
                res[j][i] = matrix[i][j];
            }
         }
         return res;
    }
};
// @lc code=end

