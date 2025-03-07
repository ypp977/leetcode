/*
 * @lc app=leetcode.cn id=628 lang=cpp
 *
 * [628] 三个数的最大乘积
 */

// @lc code=start
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        long max1= INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        long min1 = INT_MAX, min2 = INT_MAX;
        for(int num: nums)
        {
            if(num > max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if(num > max2)
            {
                max3 = max2;
                max2 = num;
            }
            else if(num > max3)
            {
                max3 = num;
            }

            if(num < min1)
            {
                min2 = min1;
                min1 = num;
            }
            else if(num < min2)
            {
                min2 = num;
            }
        }
        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};
// @lc code=end

