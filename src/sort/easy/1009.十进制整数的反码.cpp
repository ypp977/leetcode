/*
 * @lc app=leetcode.cn id=1009 lang=cpp
 *
 * [1009] 十进制整数的反码
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
        {
            return 1;
        }
        int mask = 1;
        while(mask < n)
        {
            mask = (mask << 1) | 1;
        }
        return n ^ mask;
    }
};
// @lc code=end

