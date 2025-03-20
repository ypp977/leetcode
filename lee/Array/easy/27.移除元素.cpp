/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        int res = 0, len = nums.size();
        for (int i = 0; i < len; i++) {
            if (nums[i] != val) {
                if (res != i) nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

