/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> s;
        reverse(digits.begin(), digits.end());
        int len = digits.size(), t = 1; // 进位
        for (int i = 0; i < len || t > 0; i++) {
            if (i < len) t += digits[i];
            s.emplace_back(t % 10);
            t /= 10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
// @lc code=end

