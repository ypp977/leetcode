/*
 * @lc app=leetcode.cn id=290 lang=cpp
 *
 * [290] 单词规律
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int p2s[256] = {0};
        unordered_map<string, int> str;

        istringstream ss(s);
        string word;
        int i = 0, n = pattern.size();
        while (ss >> word)
        {
            if(i == n || p2s[pattern[i]] != str[word])
            {
                return false;
            }
            p2s[pattern[i]] = str[word] = i + 1;
            i++;
        }
        return i == n;
    }
};
// @lc code=end

