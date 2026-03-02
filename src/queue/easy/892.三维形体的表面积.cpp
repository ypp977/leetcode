/*
 * @lc app=leetcode.cn id=892 lang=cpp
 *
 * [892] 三维形体的表面积
 */

// @lc code=start
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        queue<pair<int,int>> q;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                q.push({i, j});
            }
        }

        while(!q.empty())
        {
            auto [i, j] = q.front();
            q.pop();

            int h = grid[i][j];
            if(h == 0)
            {
                continue;
            }

            ans += 2;

            ans += max(h - (i > 0 ? grid[i - 1][j] : 0), 0);
            ans += max(h - (i + 1 < n ? grid[i + 1][j] : 0), 0);
            ans += max(h - (j > 0 ? grid[i][j - 1] : 0), 0);
            ans += max(h - (j + 1 < m ? grid[i][j + 1] : 0), 0);
        }
        return ans;
    }
};
// @lc code=end

