/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res = 0;
        for (int i = 1, len = nums.size(); i < len; i++) {
            if (nums[i] != nums[i - 1]) {
                res++;
                nums[res] = nums[i]; // 后面多余的数题目允许不删
            }
        }
        return res + 1; // 算上第一个数
    }
};
// @lc code=end

