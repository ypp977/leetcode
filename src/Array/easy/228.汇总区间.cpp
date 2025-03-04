/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        // nums 为空直接返回
        if(nums.empty())
        {
            return res;
        }
        // 遍历数组
        for(int start = 0, end = 0; end < nums.size(); end++)
        {
            // 如果到了最后一个元素，或者当前元素+1不等于下一个元素
            if(end + 1 == nums.size() || nums[end] + 1 != nums[end + 1])
            {
                // 如果start == end，说明start和end指向同一个元素，即只有一个元素连续，直接将该元素加入到结果中
                // 否则将start和end指向的元素加入到结果中
                res.emplace_back(start == end ? to_string(nums[start]) : to_string(nums[start]) + "->" + to_string(nums[end]));
                // 更新start的值，指向下一个元素
                start = end + 1;
            }
        }
        return res;
    }
};
// @lc code=end

