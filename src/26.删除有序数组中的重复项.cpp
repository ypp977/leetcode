/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 初始化i为1，nums 为空则为0
        int i = !nums.empty();
        // 遍历nums 元素 n
        for (int n : nums) {
            // 如果n 大于nums[i - 1]
            if(n > nums[i - 1])
                // n 赋值给nums[i]，i自增
                nums[i++] = n;
        }
        // 返回去重后数组长度
        return i;
    }
};
// @lc code=end

