/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        bitset<200001> bs;
        int uniqueCount = 0;

        for(int candy : candyType)
        {
            int idx = candy + 100000;
            if(!bs.test(idx))
            {
                bs.set(idx);
                uniqueCount++;
            }
        }
        return min(uniqueCount, (int)candyType.size() / 2);
    }
};
// @lc code=end

