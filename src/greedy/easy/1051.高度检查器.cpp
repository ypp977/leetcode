/*
 * @lc app=leetcode.cn id=1051 lang=cpp
 *
 * [1051] 高度检查器
 */

// @lc code=start
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> count(101, 0);
        for (int h : heights) {
            count[h]++;
        }
        int res = 0;
        int currheight = 1;

        for(int i = 0; i < heights.size(); i++)
        {
            while(count[currheight] == 0)
            {
                currheight++;            
            }
            if(currheight != heights[i])
            {
                res++;
            }
            count[currheight]--;
        }
        return res;
    }
};
// @lc code=end

