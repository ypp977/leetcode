/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int rowIdx[128] = {0};
        string row1 = "qwertyuiopQWERTYUIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";

        for (char c : row1) {
            rowIdx[c] = 1;
        }
        for (char c : row2) {
            rowIdx[c] = 2;
        }
        for (char c : row3) {
            rowIdx[c] = 3;
        }

        vector<string> ans;

        for(string word : words)
        {
            if(word.empty())
            {
                continue;
            }
            int target = rowIdx[word[0]];
            bool isValid = true;

            for(char c : word)
            {
                if(rowIdx[c] != target)
                {
                    isValid = false;
                    break;
                }
            }
            if(isValid)
            {
                ans.emplace_back(word);
            }
        }
        return ans;
    }
};
// @lc code=end

