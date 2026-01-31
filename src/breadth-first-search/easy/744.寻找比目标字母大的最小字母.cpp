/*
 * @lc app=leetcode.cn id=744 lang=cpp
 *
 * [744] 寻找比目标字母大的最小字母
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
         int low = 0, high = letters.size();
         while (low < high)
         {
            int mid = low + (high - low) / 2;
            if(letters[mid] > target)
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
         }
         return letters[low % letters.size()];
    }
};
// @lc code=end

