/*
 * @lc app=leetcode.cn id=598 lang=cpp
 *
 * [598] 区间加法 II
 */

// @lc code=start
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minRow = m,minCol = n;

        for(const auto& op:ops)
        {
            minRow = min(minRow,op[0]);
            minCol = min(minCol,op[1]);
        }
        return minRow * minCol;
    }
};
// @lc code=end

