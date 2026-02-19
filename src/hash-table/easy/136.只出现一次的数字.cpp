/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> a;
        for (auto x : nums)
            a[x]++;
        for (auto z : a)
            if (z.second == 1)
                return z.first;
        return -1;
    }
};
// @lc code=end

