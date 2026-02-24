/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());

        vector<int> res;
        for(int i : nums2)
        {
            if(s.erase(i))
            {
                res.emplace_back(i);
            }
        }
        return res;
    }
};
// @lc code=end

