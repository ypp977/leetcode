/*
 * @lc app=leetcode.cn id=485 lang=cpp
 *
 * [485] 最大连续 1 的个数
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNum = 0,curNum = 0;
        for(int &i:nums)
        {
            if(i == 1)
            {
                curNum++;
            }
            else
            {
                // maxNum = maxNum > curNum ? maxNum : curNum;
                maxNum = max(maxNum,curNum);
                curNum = 0;
            }
        }
        return max(maxNum, curNum);
    }
};
// @lc code=end

