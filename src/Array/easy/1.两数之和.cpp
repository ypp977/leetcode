/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 使用unordered_map(哈希表)
        unordered_map<int, int> indics;
        // 遍历nums数组
        for(int i = 0; i < nums.size();i++) {
            // 在indics中寻找target - nums[i]
            if(indics.find(target - nums[i]) != indics.end()) {
                // 找到返回下标
                return {indics[target - nums[i]], i};
            }
            // 没找到，将nums[i]与下标i存入indics中
            indics[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

