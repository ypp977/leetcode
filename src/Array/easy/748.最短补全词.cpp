/*
 * @lc app=leetcode.cn id=748 lang=cpp
 *
 * [748] 最短补全词
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> mp_licensePlate;
        for(const char& c: licensePlate) {
            if(isalpha(c)) {
                mp_licensePlate[tolower(c)]++;
            }
        }

        string ans;
        int minlen = INT_MIN;

        for(const string& word: words) {
            unordered_map<char, int> mp_word;
            for(char c: word) {
                if (isalpha(c)) {
                    mp_word[tolower(c)]++;
                }
            }
            bool isvalid = true;
            for(const auto&[key,cnt]: mp_licensePlate) {
                if(mp_word[key] < cnt)
                {
                    isvalid = false;
                    break;
                }
            }
            if(isvalid && word.size() < minlen)
            {
                ans = word;
                minlen = word.size();
            }
        }
        return ans;
    }
};
// @lc code=end

