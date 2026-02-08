/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())
        {
            return false;
        }

        if(s == goal)
        {
            vector<int> cnt(26, 0);
            for(auto c : s)
            {
                cnt[c - 'a']++;
                if(cnt[c - 'a'] > 1)
                {
                    return true;
                }
            }
            return false;
        }
        else
        {
            int first = -1, second = -1, diff = 0;

            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] != goal[i])
                {
                    diff++;
                    if(diff > 2)
                    {
                        return false;
                    }

                    if(first == -1)
                    {
                        first = i;
                    }
                    else
                    {
                        second = i;
                    }
                }
            }
            return diff == 2 && s[first] == goal[second] && s[second] == goal[first];
        }
    }
};
// @lc code=end

