/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto first = nums.begin(), last = nums.end();
        while (first < last)
        {
            auto mid = first + ((last - first) >> 1);
            if( *mid < target)
            {
                first = mid + 1;
            }
            else
            {
                last = mid;
            }
        }
        return first - nums.begin();
    }
};
// @lc code=end

