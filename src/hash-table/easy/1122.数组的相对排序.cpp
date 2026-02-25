/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> count;
        for(int num : arr1)
        {
            count[num]++;
        }
        vector<int> res;
        for(int num : arr2)
        {
            while(count[num] > 0)
            {
                res.emplace_back(num);
                count[num]--;
            }
            count.erase(num);
        }

        for(auto &[num, cnt] : count)
        {
            while(cnt > 0)
            {
                res.emplace_back(num);
                cnt--;
            }
        }
        return res;
    }
};
// @lc code=end

