/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
        {
            return false;
        }

        char map[256] = {0};
        char map2[256] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            if(map[s[i]] != map2[t[i]])
            {
                return false;
            }
            map[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        return true;
    }
};
// @lc code=end

