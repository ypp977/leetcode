/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        for(int i = 0; i < s.size(); i++)
        {
            sum -= s[i];
            sum += t[i];
        }
        sum += t[s.size()];
        return sum;
    }
};
// @lc code=end

