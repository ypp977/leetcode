/*
 * @lc app=leetcode.cn id=693 lang=cpp
 *
 * [693] 交替位二进制数
 */

// @lc code=start
class Solution {
public:
    bool hasAlternatingBits(uint32_t n) {
        uint32_t val = n + (n >> 1);
        return (val & (val + 1)) == 0;
    }
};
// @lc code=end

