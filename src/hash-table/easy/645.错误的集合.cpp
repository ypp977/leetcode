/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> asn(n + 1);

        for(int i = 0; i < n; i++)
        {
            asn[nums[i]]++;
        }
        int dup = 0, miss = 0;
        for(int i = 1; i <= n; i++)
        {
            if(asn[i] == 2)
            {
                dup = i;
            }
            else if(asn[i] == 0)
            {
                miss = i;
            }
        }
        return {dup, miss};
    }
};
// @lc code=end

