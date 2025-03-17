/*
 * @lc app=leetcode.cn id=941 lang=cpp
 *
 * [941] 有效的山脉数组
 */

// @lc code=start
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size();
        if(len < 3)
        {
            return false;
        }
        int i = 0;
        while (i < len - 1&& arr[i] < arr[i + 1])
        {
            i++;
        }
        if(i == 0 || i == len - 1)
        {
            return false;
        }
        while(i < len - 1 && arr[i] > arr[i + 1])
        {
            i++;
        }
        if(i != len - 1)
        {
            return false;
        }
        return true;
    }
};
// @lc code=end

