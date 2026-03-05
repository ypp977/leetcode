/*
 * @lc app=leetcode.cn id=883 lang=cpp
 *
 * [883] 三维形体投影面积
 */

// @lc code=start
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0)
        {
            return 0;
        }

        int areaZ = 0;
        int areaY = 0;
        int areaX = 0;

        for(int i = 0; i < n; i++)
        {
            vector<int> row = grid[i];
            sort(row.begin(), row.end());
            areaX += row.back();

            for(int j = 0; j < n; j++)
            {
                if (grid[i][j] > 0)
                {
                    ++areaZ;
                }
            }
        }

        for(int j = 0; j < n; j++)
        {
            vector<int> col;
            col.reserve(n);
            for(int i = 0; i < n; i++)
            {
                col.push_back(grid[i][j]);
            }
            sort(col.begin(), col.end());
            areaY += col.back();
        }
        return areaX + areaY + areaZ;
    }
};
// @lc code=end

