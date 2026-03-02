/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size() || s.size() < 2)
        {
            return false;
        }

        if(s == goal)
        {
            vector<int> count(26, 0);
            for(char c : s)
            {
                if(++count[c - 'a'] >= 2)
                {
                    return true;
                }
            }
            return false;
        }

        queue<int> q;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != goal[i])
            {
                q.push(i);
                if(q.size() > 2)
                {
                    return false;
                }
            }
        }

        if(q.size() != 2)
        {
            return false;
        }

        int i = q.front();
        q.pop();
        int j = q.front();
        q.pop();

        return s[i] == goal[j] && s[j] == goal[i];
    }
};
// @lc code=end

