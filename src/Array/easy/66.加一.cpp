/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        for(int i = n;i >=0; i--) {
            if(digits[i] == 9) {
                // 数字位为9
                digits[i] = 0;
            } else {
                // 数字位不为9
                digits[i] += 1;
                return digits;
            }
        }
        // 数字每位都为9
        digits.emplace_back(0);
        digits[0] = 1;
        return digits;
    }
};
// @lc code=end

