/*
 * @lc app=leetcode.cn id=748 lang=cpp
 *
 * [748] 最短补全词
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> map_license;
        for(char &c: licensePlate) {
            if(isalpha(c)) {
                map_license[tolower(c)]++;
            }
        }

        int min_len = INT_MAX;
        string res;
        for(string &word : words) {
            unordered_map<char, int> map_word;
            
            for (char &c : word)
            {
                if(isalpha(c)) {
                    map_word[c]++;
                }
            }
            bool is_completing = true;
            
            for(auto &[key,cnt]: map_license)
            {
                if(map_word[key] < cnt)
                {
                    is_completing = false;
                    break;
                }
            }

            if(is_completing && word.size() < min_len)
            {
                min_len = word.size();
                res = word;
            }
        }
        return res;
    }
};
// @lc code=end

