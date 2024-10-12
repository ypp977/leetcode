/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0)
        {
            return 0;
        }
        int sum = 0;
        for(int i = 0;i < n - 1; ++i)
        {
            if(timeSeries[i + 1] - timeSeries[i] > duration)
            {
                sum += duration;
            }
            else
            {
                sum += timeSeries[i + 1] - timeSeries[i];
            }
        }
        return sum + duration;
    }
};
// @lc code=end

