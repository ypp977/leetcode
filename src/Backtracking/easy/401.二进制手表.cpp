/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        if(turnedOn < 0 || turnedOn > 8) {
            return ans;
        }

        vector<int> hour_count(12);
        vector<int> min_count(60);
        for (int h = 0; h < 12;h++) {
            hour_count[h] = __builtin_popcount(h);
        }
        for (int m = 0; m < 60;m++) {
            min_count[m] = __builtin_popcount(m);
        }

        for(int h = 0; h < 12;h++) {
            for(int m = 0; m < 60;m++) {
                if(hour_count[h] + min_count[m] == turnedOn) {
                    ans.emplace_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
                }
            }
        }
        return ans;
    }
};
// @lc code=end

