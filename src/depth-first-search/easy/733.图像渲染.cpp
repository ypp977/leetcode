/*
 * @lc app=leetcode.cn id=733 lang=cpp
 *
 * [733] 图像渲染
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& image,int r,int c,int oldColor,int newColor)
    {
        if(r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != oldColor)
        {
            return;
        }
        image[r][c] = newColor;

        dfs(image, r - 1, c, oldColor, newColor);
        dfs(image, r + 1, c, oldColor, newColor);
        dfs(image, r, c - 1, oldColor, newColor);
        dfs(image, r, c + 1, oldColor, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)
        {
            return image;
        }

        dfs(image, sr, sc, image[sr][sc], color);
        return image;
    }
};
// @lc code=end

