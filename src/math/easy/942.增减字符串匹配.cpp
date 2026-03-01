/*
 * @lc app=leetcode.cn id=942 lang=cpp
 *
 * [942] 增减字符串匹配
 */

// @lc code=start
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> ans;
        ans.reserve(n + 1);

        int low = 0, high = n;

        for(char c : s)
        {
            if(c == 'I')
            {
                ans.push_back(low++);
            }
            else
            {
                ans.push_back(high--);
            }
        }
        ans.push_back(low);
        return ans;
    }
};
// @lc code=end

