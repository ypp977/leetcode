/*
 * @lc app=leetcode.cn id=819 lang=cpp
 *
 * [819] 最常见的单词
 */

// @lc code=start
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(auto &s: paragraph)
        {
            s = isalpha(s)? tolower(s): ' ';
        }

        string curr_str, max_str;
        unordered_map<string, int> freq;
        unordered_set<string> ban(banned.begin(), banned.end());

        stringstream ss(paragraph);

        while (ss >> curr_str)
        {
            if (ban.count(curr_str) == 0 && freq[max_str] < ++freq[curr_str])
            {
                max_str = curr_str;
            }
        }
        return max_str;
    }
};
// @lc code=end

