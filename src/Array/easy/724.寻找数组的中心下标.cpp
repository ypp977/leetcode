/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心下标
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = reduce(nums.begin(), nums.end());
        int left = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(2 * left == sum - nums[i]) {
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};
// @lc code=end

