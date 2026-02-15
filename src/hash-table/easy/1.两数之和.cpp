/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        mp.reserve(n);

        for(int i = 0; i < n; i++)
        {
            int comp = target - nums[i];
            if(mp.count(comp))
            {
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

