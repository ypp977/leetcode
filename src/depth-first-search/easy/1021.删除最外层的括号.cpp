/*
 * @lc app=leetcode.cn id=1021 lang=cpp
 *
 * [1021] 删除最外层的括号
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;

        for(char c : s)
        {
            if(c == '(')
            {
                if(cnt > 0)
                {
                    ans += c;
                }
                cnt++;
            }
            else
            {
                cnt--;
                if(cnt > 0)
                {
                    ans += c;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

