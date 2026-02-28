/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0, right = n;
        while(left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long sum = mid * (mid + 1) / 2;
            if(sum <= n)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return (int)right;
    }
};
// @lc code=end

