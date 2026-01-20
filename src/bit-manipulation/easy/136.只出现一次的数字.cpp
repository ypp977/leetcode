/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        for(auto i : mp)
        {
            if(i.second == 1)
            {
                return i.first;
            }
        }
        return -1;
    }
};
// @lc code=end

