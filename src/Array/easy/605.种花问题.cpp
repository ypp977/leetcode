/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)
        {
            return true;
        }

        if(flowerbed.size() == 1)
        {
            return flowerbed[0] == 0 && n <= 1;
        }

        if(flowerbed[1] == 0 && flowerbed[0] == 0)
        {
            flowerbed[0] = 1;
            n--;
            if(n <= 0)
            {
                return true;
            }
        }

        for(int i = 1;i < flowerbed.size() - 1;i++)
        {
            if(n <= 0)
            {
                return true;
            }
            if(flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                n--;
            }
        }
        if(flowerbed[flowerbed.size() - 1] == 0 && flowerbed[flowerbed.size() - 2] == 0)
        {
            n--;
        }

        return n <= 0;
        // int size = flowerbed.size();
        // for(int i = 0; i < size; i++)
        // {
        //     if(n <= 0)
        //     {
        //         return true;
        //     }
        //     if(flowerbed[i] == 0 &&
        //     (i ==0 || flowerbed[i - 1] == 0) &&
        //     (i == size - 1 || flowerbed[i + 1] == 0))
        //     {
        //         flowerbed[i] = 1;
        //         n--;
        //     }
        // }
        // return n <= 0;
    }
};
// @lc code=end

