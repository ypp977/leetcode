/*
 * @lc app=leetcode.cn id=1046 lang=cpp
 *
 * [1046] 最后一块石头的重量
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(int w : stones)
        {
            pq.push(w);
        }

        while(pq.size() > 1)
        {
            int y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(y > x)
            {
                pq.push(y - x);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};
// @lc code=end

