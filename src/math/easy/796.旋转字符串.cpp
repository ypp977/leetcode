/*
 * @lc app=leetcode.cn id=796 lang=cpp
 *
 * [796] 旋转字符串
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size())
        {
            return false;
        }
        string temp = s + s;
        return temp.find(goal) != string::npos;
    }
};
// @lc code=end

