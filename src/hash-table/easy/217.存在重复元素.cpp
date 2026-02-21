/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        set.reserve(nums.size());

        for(int& num : nums)
        {
            if (!set.insert(num).second)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

