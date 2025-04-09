/*
 * @lc app=leetcode.cn id=1009 lang=cpp
 *
 * [1009] 十进制整数的反码
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int n) {
        int x = 1;
        while (x < n)
        {
            x = x * 2 + 1;
        }
        return x ^ n;
    }
};
// @lc code=end

