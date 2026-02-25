/*
 * @lc app=leetcode.cn id=976 lang=cpp
 *
 * [976] 三角形的最大周长
 */

// @lc code=start
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        vector<int> count(1000001, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        vector<int> nums_sorted;
        for(int i = 1000000; i >= 1; i--)
        {
            while(count[i] > 0)
            {
                nums_sorted.emplace_back(i);
                count[i]--;
            }
        }
        for (int i = 0;i < nums_sorted.size() - 2; i++)
        {
            if(nums_sorted[i] < nums_sorted[i + 1] + nums_sorted[i + 2])
            {
                return nums_sorted[i] + nums_sorted[i + 1] + nums_sorted[i + 2];
            }
        }
        return 0;
    }
};
// @lc code=end

