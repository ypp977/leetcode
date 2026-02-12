/*
 * @lc app=leetcode.cn id=884 lang=cpp
 *
 * [884] 两句话中的不常见单词
 */

// @lc code=start
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> count;
        stringstream ss(s1 + " " + s2);
        string word;

        while(ss >> word)
        {
            count[word]++;
        }

        vector<string> res;
        for(auto & pair : count)
        {
            if(pair.second == 1)
            {
                res.push_back(pair.first);
            }
        }
        return res;
    }
};
// @lc code=end

