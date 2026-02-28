/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ans = 0;
        for(char c : columnTitle)
        {
            ans = ans * 26 + c - 'A' + 1;
        }
        return (int)ans;
    }
};
// @lc code=end

