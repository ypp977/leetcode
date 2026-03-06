/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0)
        {
            return false;
        }

        stack<char> st;

        for(char c : s)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }

                char top = st.top();
                st.pop();

                if(c == ')' && top != '(' || c == ']' && top != '[' || c == '}' && top != '{')
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
// @lc code=end

