/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size_s = s.size(), size_t = t.size();
        if(size_s == 0)
        {
            return true;
        }
        if(size_s > size_t)
        {
            return false;
        }
        int i = 0, j = 0;
        while(i < size_s && j < size_t)
        {
            if(s[i] == t[j])
            {
                i++;
                if(i == size_s)
                {
                    return true;
                }
            }
            j++;
        }
        return false;
    }
};
// @lc code=end

