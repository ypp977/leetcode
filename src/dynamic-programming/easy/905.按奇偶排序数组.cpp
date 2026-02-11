/*
 * @lc app=leetcode.cn id=905 lang=cpp
 *
 * [905] 按奇偶排序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while(left < right)
        {
            if((nums[left] & 1) == 0)
            {
                left++;
            }
            else if((nums[right] & 1) == 1)
            {
                right--;
            }
            else
            {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }
        return nums;
    }
};
// @lc code=end

