/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 0, right = num;
        while(left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;
            if(square == num)
            {
                return true;
            }
            else if(square < num)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return false;
    }
};
// @lc code=end

