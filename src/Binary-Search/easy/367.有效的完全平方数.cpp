/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int i = 1;
        while (num > 0)
        {
            if (!(num -= i))
            {
                return true;
            }
            i += 2;
        }
        return false;
    }
};
// @lc code=end

