/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(auto start(0),end(0); end < nums.size(); end++)
        {
            if(end + 1 == nums.size() || nums[end + 1] != nums[end] + 1)
            {
                ans.emplace_back(end == start ? to_string(nums[end]) : to_string(nums[start]) + "->" + to_string(nums[end]));
                start = end + 1;
            }
        }
        return ans;
    }
};
// @lc code=end

