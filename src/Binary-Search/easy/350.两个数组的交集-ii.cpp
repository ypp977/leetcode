/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums1_str;

        for(int &num : nums1)
        {
            nums1_str[num]++;
        }
        vector<int> res;
        for(int &num : nums2)
        {
            if(nums1_str[num]-- > 0)
            {
                res.emplace_back(num);
            }
        }
        return res;
    }
};
// @lc code=end

