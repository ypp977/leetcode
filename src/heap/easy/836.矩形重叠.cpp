/*
 * @lc app=leetcode.cn id=836 lang=cpp
 *
 * [836] 矩形重叠
 */

// @lc code=start
class Solution {
public:
    bool isOverlap(int start1,int end1,int start2,int end2)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;
        minHeap.push({start1, end1});
        minHeap.push({start2, end2});

        auto first = minHeap.top();
        minHeap.pop();

        auto second = minHeap.top();
        minHeap.pop();

        return second.first < first.second;
    }
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[0] == rec1[2] || rec1[1] == rec1[3]|| rec2[0] == rec2[2] || rec2[1] == rec2[3])
        {
            return false;
        }
        bool xOverlap = isOverlap(rec1[0], rec1[2], rec2[0], rec2[2]);
        bool yOverlap = isOverlap(rec1[1], rec1[3], rec2[1], rec2[3]);

        return xOverlap && yOverlap;
        }
};
// @lc code=end

