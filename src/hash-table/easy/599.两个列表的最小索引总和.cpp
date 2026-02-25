/*
 * @lc app=leetcode.cn id=599 lang=cpp
 *
 * [599] 两个列表的最小索引总和
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> map;
        for(int i = 0; i < list1.size(); i++)
        {
            map[list1[i]] = i;
        }
        vector<string> res;
        int minSum = INT_MAX;

        for(int i = 0; i < list2.size(); i++)
        {
            if(i > minSum)
            {
                break;
            }
            if(map.count(list2[i]))
            {
                int sum = i + map[list2[i]];
                if(sum < minSum)
                {
                    minSum = sum;
                    res.clear();
                    res.emplace_back(list2[i]);
                }
                else if(sum == minSum)
                {
                    res.emplace_back(list2[i]);
                }
            }
        }
        return res;
    }
};
// @lc code=end

