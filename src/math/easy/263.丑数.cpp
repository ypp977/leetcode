/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0)
        {
            return false;
        }
        for(int p : {2, 3, 5})
        {
            while(n % p == 0)
            {
                n /= p;
            }
        }
        return n == 1;
    }
};
// @lc code=end

