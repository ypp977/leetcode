/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        for (int i : nums1)
        {
            m[i]++;
        }
        vector<int> ans;
        for(int i : nums2)
        {
            if(m[i]-- > 0)
            {
                ans.emplace_back(i);
            }
        }
        return ans;
    }
};
// @lc code=end

