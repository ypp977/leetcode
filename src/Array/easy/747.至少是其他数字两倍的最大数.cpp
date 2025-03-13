/*
 * @lc app=leetcode.cn id=747 lang=cpp
 *
 * [747] 至少是其他数字两倍的最大数
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() < 2) {
            return nums.size() - 1;
        }

        int max1 = INT_MIN, max2 = INT_MIN, res = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > max1) {
                res = i;
                max2 = max1;
                max1 = nums[i];
            } else if(nums[i] > max2) {
                max2 = nums[i];
            }
        }
        return max1 >= max2 * 2 ? res : -1;
    }
};
// @lc code=end

