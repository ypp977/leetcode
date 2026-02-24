/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int counts[128] = {0};
        int ans = 0;
        for(char c : s)
        {
            counts[c]++;
            if(counts[c] == 2)
            {
                ans += 2;
                counts[c] = 0;
            }
        }
        return ans == s.size() ? ans : ans + 1;

    }
};
// @lc code=end

