/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        unordered_set<string> landSet;
        int ans = 0;

        for (int i = 0;i < grid.size();i++)
        {
            for (int j = 0;j < grid[i].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    ans += 4;
                    // 上方和左方邻居的key
                    string top = to_string(i - 1) + "," + to_string(j);
                    string left = to_string(i) + "," + to_string(j - 1);

                    if(landSet.count(top))
                    {
                        ans -= 2;
                    }
                    if(landSet.count(left))
                    {
                        ans -= 2;
                    }

                    landSet.insert(to_string(i) + "," + to_string(j));
                }
            }
        }
        return ans;
    }
};
// @lc code=end

