/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        if (numRows == 0) {
            return ret;
        }
        ret.reserve(numRows);
        // 遍历层数
        for (int i = 0; i < numRows; i++) {
            ret.emplace_back(i + 1, 1);
            for (int j = 1; j < i;j++) {
                ret[i][j] = ret[i - 1][j] + ret[i -1][j - 1];
            }
        }
        return ret;
    }
};
// @lc code=end

