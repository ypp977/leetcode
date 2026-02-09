/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
        {
            return 0;
        }
        int maxpro = 0;
        int minprice = INT_MAX;

        for(int i : prices)
        {
            minprice = min(minprice, i);
            maxpro = max(maxpro, i - minprice);
        }
        return maxpro;
    }
};
// @lc code=end

