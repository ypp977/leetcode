/*
 * @lc app=leetcode.cn id=219 lang=cpp
 *
 * [219] 存在重复元素 II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // 存储数值和下标
        unordered_map<int, int> map;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            // 判断 nums[i] 是否存在于map中
            if(map.count(nums[i]))
            {
                // 存在，则判断当前索引 i 和map中记录的索引值差值是否 <=k
                if(abs(i - map[nums[i]]) <= k)
                {
                    return true;
                }
            }
            //  不存在或者差值大于 k 则将当前元素以及索引记录到 map 中
            map[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end

