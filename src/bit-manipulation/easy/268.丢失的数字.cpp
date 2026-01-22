/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 丢失的数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = len * (len + 1) / 2;

        for (int i = 0; i < len; i++) {
            sum -= nums[i];
        }

        return sum;
    }
};
// @lc code=end

