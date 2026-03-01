/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        vector<char> seen(n + 1, 0);
        int dup = -1;
        long long actual = 0;

        for(int x : nums)
        {
            actual += x;
            if(seen[x])
            {
                dup = x;
            }
            seen[x] = 1;
        }
        long long expected = 1LL * n * (n + 1) / 2;

        int missing = expected - (actual - dup);
        return {dup, missing};
    }
};
// @lc code=end

