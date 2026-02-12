/*
 * @lc app=leetcode.cn id=744 lang=cpp
 *
 * [744] 寻找比目标字母大的最小字母
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<bool> flag(26, false);
        for (char c : letters)
        {
            flag[c - 'a'] = true;
        }

        int curr = (target - 'a' + 1) % 26;

        while (!flag[curr])
        {
            curr = (curr + 1) % 26;
        }

        return 'a' + curr;
    }
};
// @lc code=end

