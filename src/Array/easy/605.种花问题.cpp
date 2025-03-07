/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size(), i = 0;
        while(i < len -1)
        {
            if(flowerbed[i] == 0 && flowerbed[i+1] == 0)
            {
                n--;
                i += 2;
            }
            else if(flowerbed[i] == 1)
            {
                i += 2;
            }
            else if(flowerbed[i] == 0 && flowerbed[i+1] == 1)
            {
                i += 3;
            }
        }
        if(i < len && flowerbed[i] == 0)
        {
            n--;
        }
        return n <= 0;
    }
};
// @lc code=end

