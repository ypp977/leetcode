/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
<<<<<<< HEAD
        return nums.size() != set<int>(nums.begin(), nums.end()).size();
=======
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
>>>>>>> e8ece6b (2025-2-28 algo)
    }
};
// @lc code=end

