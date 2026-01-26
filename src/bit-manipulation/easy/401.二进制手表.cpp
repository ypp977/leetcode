/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution
{
public:
    vector<string> readBinaryWatch(int num)
    {
        vector<string> res;

        for(int hour = 0; hour < 12; hour++)
        {
            for(int minute = 0; minute < 60; minute++)
            {
                if(__builtin_popcount(hour) + __builtin_popcount(minute) == num)
                {
                    string str = to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute);
                    res.push_back(str);   
                }
            }
        }
        return res;
    }
};
// @lc code=end

