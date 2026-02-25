/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

// @lc code=start
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        bool isPrime[21] = {false, false, true, true, false, true, false, true,
                            false, false, false, true, false, true, false, false,
                            false, true, false, true, false};
        int ans = 0;
        for(int i = left; i <= right; i++)
        {
            int cnt = __builtin_popcount(i);
            if(isPrime[cnt])
            {
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

