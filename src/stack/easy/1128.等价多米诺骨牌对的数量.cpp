/*
 * @lc app=leetcode.cn id=1128 lang=cpp
 *
 * [1128] 等价多米诺骨牌对的数量
 */

// @lc code=start
class Solution
{
public:
    int numEquivDominoPairs(vector<vector<int>> &d)
    {
        int result = 0;
        for (int i = 0; i < d.size(); i++)
        {
            for (int j = i + 1; j < d.size(); j++)
            {
                if ((d[i][0] == d[j][0] && d[i][1] == d[j][1]) || (d[i][0] == d[j][1] && d[i][1] == d[j][0]))
                {
                    result++;
                }
            }
        }
        
        return result;
    }
};
// @lc code=end

