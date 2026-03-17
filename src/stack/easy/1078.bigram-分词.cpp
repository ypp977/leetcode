/*
 * @lc app=leetcode.cn id=1078 lang=cpp
 *
 * [1078] Bigram 分词
 */

// @lc code=start
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second)
    {
        vector<string> ans;
        vector<string> temp; // vector to store words of text string
        string s = "";
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] != ' ')
                s += text[i];
            else
            {
                temp.push_back(s);
                s = "";
            }
        }
        temp.push_back(s); // to store last word of text string

        for (int i = 0; i < temp.size(); i++)
        {
            if (i + 2 < temp.size()) // to check if iterator does not go out of bound
                if (temp[i] == first and temp[i + 1] == second)
                    ans.push_back(temp[i + 2]);
        }

        return ans;
    }
};
// @lc code=end

