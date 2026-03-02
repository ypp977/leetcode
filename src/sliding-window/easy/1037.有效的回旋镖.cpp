/*
 * @lc app=leetcode.cn id=1037 lang=cpp
 *
 * [1037] 有效的回旋镖
 */

// @lc code=start
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int l = 0, r = 2;

        long long x1 = points[l + 1][0] - points[l][0];
        long long y1 = points[l + 1][1] - points[l][1];
        long long x2 = points[r][0] - points[l][0];
        long long y2 = points[r][1] - points[l][1]; 

        return x1 * y2 != x2 * y1;
    }
};
// @lc code=end

