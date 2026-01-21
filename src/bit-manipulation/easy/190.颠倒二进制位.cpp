/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
public:
    char tb[16] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int reverseBits(int n)
    {
        int curr = 0;
        uint32_t ret = 0;
        uint32_t mask = 0xF;
        for (int i = 0; i < 8; i++)
        {
            ret = ret << 4;
            curr = n & mask;
            ret |= tb[curr];
            n = n >> 4;
        }
        return ret;
    }
};
// @lc code=end

