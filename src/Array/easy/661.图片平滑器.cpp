/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */

// @lc code=start
class Solution {
public:
    int isvalid(int x, int y,vector<vector<int>>& img) {
        return x >= 0 && x < img.size() && y >= 0 && y < img[0].size() ? img[x][y] : -1; 
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res(img.size(), vector<int>(img[0].size(), 0));
        int tmp, sum;
        for (int i = 0; i < img.size(); i++)
        {
            for(int j = 0; j < img[0].size(); j++) {
                tmp = 0;
                sum = 0;
                for (int k = -1; k <= 1;k++) {
                    for (int l = -1; l <= 1;l++) {
                        if(isvalid(i + k, j + l, img) != -1) {
                            sum += img[i + k][j + l];
                            tmp++;
                        }
                    }
                }
                res[i][j] = sum / tmp;
            }
        }
        return res;
    }
};
// @lc code=end

