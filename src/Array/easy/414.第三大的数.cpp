/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1=LONG_MIN;
        long max2=LONG_MIN;
        long max3=LONG_MIN;

        for (auto num:nums)
        {
            if(num == max1 || num == max2 || num == max3)
            {
                continue;
            }
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
        }
        return max3 == LONG_MIN ? max1 : max3;
    }
};
// @lc code=end

