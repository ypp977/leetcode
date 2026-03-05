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
        int num = 0;

        for(auto i : nums)
        {
            num = (num * 2 + i) % 5;
            res.push_back(num == 0);
        }
        return res;
    }
};
// @lc code=end

