/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

// @lc code=start
class Solution {
public:
    bool isSelfDividing(int num)
    {
        int x = num;
        while(x > 0)
        {
            int d = x % 10;
            if(d == 0 || num % d != 0)
            {
                return false;
            }
            x /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        res.reserve(right - left + 1);
        for(int i = left; i <= right; i++)
        {
            if(isSelfDividing(i))
            {
                res.emplace_back(i);
            }
        }
        return res;
    }
};
// @lc code=end

