/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        if(num == 0)
        {
            return "0";
        }
        unsigned int n = num;
        string res = "";
        char hex[17] = "0123456789abcdef";

        while(n != 0)
        {
            res += hex[n & 15];
            n >>= 4;
        }

        return {res.rbegin(), res.rend()};
    }
};
// @lc code=end

