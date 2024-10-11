/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i = 0; i < n;i++)
        {
            if(nums[i] != 0)
            {
                nums[k++] = nums[i];
            }
        }
        while(k < n)
        {
            nums[k++] = 0;
        }
        return;
    }
};
// @lc code=end

