/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int getValue(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }
    int romanToInt(string s) {
        int val = 0;
        int n = s.size();

        for(int i = 0; i < n; i++)
        {
            int cur = getValue(s[i]);
            if(i < n - 1 && cur < getValue(s[i + 1]))
            {
                val -= cur;
            }
            else
            {
                val += cur;
            }
        }
        return val;
    }
};
// @lc code=end

