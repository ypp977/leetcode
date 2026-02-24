/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int ch[26] = {0};
        for (char c : s) {
            ch[c - 'a']++;
        }
        for(char c : t)
        {
            ch[c - 'a']--;
            if (ch[c - 'a'] < 0)
            {
                return c;
            }
        }
        return ' ';
    }
};
// @lc code=end

