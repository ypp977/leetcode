/*
 * @lc app=leetcode.cn id=806 lang=cpp
 *
 * [806] 写字符串需要的行数
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int currsum = 0,cnt = 1;

        for(auto c : s)
        {
            int width = widths[c - 'a'];
            currsum += width;

            if(currsum > 100)
            {
                cnt++;
                currsum = width;
            }
        }
        return {cnt,currsum};
    }
};
// @lc code=end

