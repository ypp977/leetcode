/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // （1）STL-lower_bound()
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        
        // （2）二分
        // int l = 0, r = nums.size() - 1;
        // while (l < r) {
        //     int mid = l + r >> 1;
        //     if (nums[mid] < target) l = mid + 1;
        //     else r = mid;
        // }
        // if (nums[l] >= target) return l; // 返回第一个>=target的元素位置
        // else return l + 1;
    }
};
