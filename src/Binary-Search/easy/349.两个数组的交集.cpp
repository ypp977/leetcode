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
        res.reserve(min(nums1.size(), nums2.size()));

        for(int & num : nums2)
        {
            if(s.erase(num))
            {
                res.emplace_back(num);
            }
        }
        return res;
    }
};
// @lc code=end

