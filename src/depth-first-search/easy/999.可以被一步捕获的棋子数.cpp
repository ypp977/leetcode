/*
 * @lc app=leetcode.cn id=999 lang=cpp
 *
 * [999] 可以被一步捕获的棋子数
 */

// @lc code=start
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row, col;
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[i].size(); j++)
            {
                if(board[i][j] == 'R')
                {
                    row = i;
                    col = j;
                    break;
                }
            }
        }

        int cap = 0;
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        for(int i = 0; i < 4; i++)
        {
            int x = row,y = col;

            while (true)
            {
                x += dx[i];
                y += dy[i];

                if(x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] == 'B')
                {
                    break;
                }

                if(board[x][y] == 'p')
                {
                    cap++;
                    break;
                }
            }
        }
        return cap;
    }
};
// @lc code=end

