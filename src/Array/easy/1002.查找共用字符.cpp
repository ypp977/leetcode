/*
 * @lc app=leetcode.cn id=1002 lang=cpp
 *
 * [1002] 查找共用字符
 */

// @lc code=start
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> min_count(26, INT_MAX);

        for(auto word : words) {
            vector<int> cur_count(26, 0);
            for(auto c : word) {
                cur_count[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                min_count[i] = min(min_count[i], cur_count[i]);
            }
        }

        vector<string> res;
        for (int i = 0; i < 26; i++) {
            while(min_count[i]-- > 0) {
                res.emplace_back(1, i + 'a');
            }
        }
        return res;
    }
};
// @lc code=end

