/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = (1 + nums.size()) * nums.size() / 2;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum -= nums[i];
        }
        return sum;
    }
};
// @lc code=end

