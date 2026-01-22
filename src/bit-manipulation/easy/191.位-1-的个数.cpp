/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while (n)
        {
            n &= (n - 1);
            count++;
        }

        return count;
    }
};
// @lc code=end

