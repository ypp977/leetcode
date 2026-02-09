/*
 * @lc app=leetcode.cn id=747 lang=cpp
 *
 * [747] 至少是其他数字两倍的最大数
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = -1, max2 = -1, result = -1;
        int n = nums.size();

        if(n == 0)
        {
            return -1;
        }
        if(n == 1)
        {
            return 0;
        }

        for(int i = 0; i < n; i++)
        {
            if(nums[i] > max1)
            {
                result = i;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2)
            {
                max2 = nums[i];
            }
        }
        return max1 >= max2 * 2 ? result : -1;
    }
};
// @lc code=end

