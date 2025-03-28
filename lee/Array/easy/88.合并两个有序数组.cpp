/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n - 1;
        m--, n--;
        while (m >= 0 && n >= 0) {
            if (nums1[m] <= nums2[n]) swap(nums1[len], nums2[n]), n--;
            else swap(nums1[len], nums1[m]), m--;
            len--;
        }
        while (n >= 0) nums1[len--] = nums2[n--]; // nums1为空的情况
    }
};
// @lc code=end

