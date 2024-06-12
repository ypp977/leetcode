/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int, int> count;
        // for (int num : nums) {
        //     if(++count[num] > nums.size() / 2) {
        //         return num;
        //     }
        // }
        // return 0;
        /* 初始化计数器和候选元素 */
        int count = 0, candidate = 0;
        /* 遍历数组中的每个元素 */
        for (int num : nums) {
            /* 当计数器为0时，选择新的候选元素 */
            if (count == 0) {
                candidate = num;
            }
            /* 根据当前元素是否等于候选元素，更新计数器 */
            count += (num == candidate) ? 1 : -1;
        }
        /* 一个元素在数组中出现次数超过一半，即 n/2+1 次。假设数组长度为 n，那么其他元素的总和最多为 n/2-1 次。
        每次计数器减少，意味着候选元素与当前元素不同。多数元素因为出现次数超过一半，将会使得最终 count 不会归零 */
        return candidate;
    }
};
// @lc code=end

