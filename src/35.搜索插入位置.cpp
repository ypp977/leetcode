/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // 方法一：
        // 使用STL库函数，lower_bound函数找到第一个大于等于target的元素，返回其下标
        // return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        // 方法二：
        // 二分查找
        auto start = nums.begin(), end = nums.end();
        while(start < end) {
            auto mid = start + ((end - start) >> 1);
            if(*mid < target) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start - nums.begin();
    }
};
// @lc code=end

