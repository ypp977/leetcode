/*
 * @lc app=leetcode.cn id=908 lang=cpp
 *
 * [908] 最小差值 I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if(nums.size() < 2)
        {
            return 0;
        }
        auto [minValue, maxValue] = minmax_element(nums.begin(), nums.end());
        int diff = *maxValue - *minValue;
        return max(0, diff - 2 * k);
    }
};
// @lc code=end

