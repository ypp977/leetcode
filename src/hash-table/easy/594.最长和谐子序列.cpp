/*
 * @lc app=leetcode.cn id=594 lang=cpp
 *
 * [594] 最长和谐子序列
 */

// @lc code=start
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for(int num : nums)
        {
            cnt[num]++;
        }
        int maxLen = 0;

        for(auto & [num,value] : cnt)
        {
            if(cnt.count(num - 1))
            {
                maxLen = max(maxLen, value + cnt[num - 1]);
            }
        }
        return maxLen;
    }
};
// @lc code=end

