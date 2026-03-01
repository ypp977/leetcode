/*
 * @lc app=leetcode.cn id=1018 lang=cpp
 *
 * [1018] 可被 5 整除的二进制前缀
 */

// @lc code=start
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        res.reserve(nums.size());

        int rem = 0;

        for(int bit : nums)
        {
            rem = (rem * 2 + bit) % 5;
            res.push_back(rem == 0);
        }
        return res;
    }
};
// @lc code=end

