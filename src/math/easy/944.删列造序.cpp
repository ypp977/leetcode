/*
 * @lc app=leetcode.cn id=944 lang=cpp
 *
 * [944] 删列造序
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if(strs.empty() || strs[0].empty())
        {
            return 0;
        }

        int rows = strs.size();
        int cols = strs[0].size();
        int deletion = 0;

        for(int c = 0; c < cols; c++)
        {
            for(int r = 1; r < rows; r++)
            {
                if(strs[r][c] < strs[r - 1][c])
                {
                    ++deletion;
                    break;
                }
            }
        }
        return deletion;
    }
};
// @lc code=end

