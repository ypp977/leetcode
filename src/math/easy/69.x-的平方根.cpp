/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x < 2)
        {
            return x;
        }
        long long r = x;
        while(r > x / r)
        {
            r = (r + x / r) / 2;
        }
        return (int)r;
    }
};
// @lc code=end

