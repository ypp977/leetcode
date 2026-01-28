/*
 * @lc app=leetcode.cn id=1103 lang=cpp
 *
 * [1103] 分糖果 II
 */

// @lc code=start
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people);

        for (int i = 0; candies > 0; i++, candies -= i)
        {
            res[i % num_people] += min(i + 1, candies);
        }
        return res;
    }
};
// @lc code=end

