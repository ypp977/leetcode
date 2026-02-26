/*
 * @lc app=leetcode.cn id=744 lang=cpp
 *
 * [744] 寻找比目标字母大的最小字母
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        priority_queue<char,vector<char>,greater<char>> q;

        for(char c:letters)
        {
            q.push(c);
        }

        char smallest = q.top();

        while(!q.empty())
        {
            if(q.top()>target)
            {
                return q.top();
            }
            q.pop();
        }
        return smallest;
    }
};
// @lc code=end

