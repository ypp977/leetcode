/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        int res = 0;
        for (; n >= 0; n -= ++res)
            ;
        return res - 1;
    }
};
// @lc code=end

