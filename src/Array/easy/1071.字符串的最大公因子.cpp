/*
 * @lc app=leetcode.cn id=1071 lang=cpp
 *
 * [1071] 字符串的最大公因子
 */

// @lc code=start
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1) ? (str1.substr(0, gcd(str1.size(), str2.size()))) : "";
    }
};
// @lc code=end

