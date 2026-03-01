/*
 * @lc app=leetcode.cn id=888 lang=cpp
 *
 * [888] 公平的糖果交换
 */

// @lc code=start
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum_a = 0,sum_b = 0;
        for(int i = 0;i < aliceSizes.size();i++)
        {
            sum_a += aliceSizes[i];
        }
        for(int i = 0;i < bobSizes.size();i++)
        {
            sum_b += bobSizes[i];
        }

        int diff = (sum_a - sum_b) / 2;
        unordered_set<int> bobSet;
        for(int y : bobSizes)
        {
            bobSet.insert(y);
        }
        for(int x : aliceSizes)
        {
            int y = x - diff;
            if(bobSet.count(y))
            {
                return {x, y};
            }
        }
        return {};
    }
};
// @lc code=end

