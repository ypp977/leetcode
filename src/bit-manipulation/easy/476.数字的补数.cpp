/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int mask = 1;
        while (mask < num) {
            mask = (mask << 1) + 1;
        }
        return num ^ mask;
    }
};
// @lc code=end

