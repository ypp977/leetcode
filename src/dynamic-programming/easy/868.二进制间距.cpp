/*
 * @lc app=leetcode.cn id=868 lang=cpp
 *
 * [868] 二进制间距
 */

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {
        int lastone = -1;
        int ans = 0;

        for (int i = 0; n > 0;i++)
        {
            if(n & 1)
            {
                if(lastone != -1)
                {
                    ans = max(ans,i - lastone);
                }
                lastone = i;
            }
            n >>= 1;
        }
        return ans;
    }
};
// @lc code=end

