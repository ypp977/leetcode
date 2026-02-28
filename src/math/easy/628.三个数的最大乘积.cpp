/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min = INT_MAX, min2 = INT_MAX;
        if(nums.size() == 3)
        {
            return nums[0] * nums[1] * nums[2];
        }
        for(int x : nums)
        {
            if(x <= min)
            {
                min2 = min;
                min = x;
            }
            else if(x <= min2)
            {
                min2 = x;
            }

            if(x >= max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = x;
            }
            else if(x >= max2)
            {
                max3 = max2;
                max2 = x;
            }
            else if(x >= max3)
            {
                max3 = x;
            }
        }
        long long res = 1LL * max1 * max2 * max3;
        long long res2 = 1LL * min * min2 * max1;
        return (int)max(res, res2);
    }
};
// @lc code=end

