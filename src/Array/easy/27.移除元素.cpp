/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 初始化数组长度，索引
        int len = nums.size(),index = 0;
        // 遍历
        while(index < len) {
            if(nums[index] != val) {
                ++index;
            }
            else {
                nums[index] = nums[len - 1];
                --len;
            }

        }
        return index;
    }
};
// @lc code=end

