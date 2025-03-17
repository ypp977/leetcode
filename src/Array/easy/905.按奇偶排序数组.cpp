/*
 * @lc app=leetcode.cn id=905 lang=cpp
 *
 * [905] 按奇偶排序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        if (len < 2) {
            return nums;
        }
        int j = 0;
        for (int i = 0; i < len; i++) {
            if(nums[i] % 2 == 0) {
                swap(nums[i], nums[j++]);
            }
        }
        return nums;
    }
};
// @lc code=end

