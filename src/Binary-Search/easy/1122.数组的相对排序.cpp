/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int h[1001]= {0};
        int a = arr1.size(),b = arr2.size();
        // 统计arr1中元素出现的次数
        for(int i = 0;i < a;i++)
        {
            h[arr1[i]]++;
        }

        // 遍历arr2
        int j = 0;
        for(int i = 0;i < b;i++)
        {
            while(h[arr2[i]]--)
            {
                arr1[j++] = arr2[i];
            }
        }

        for(int i = 0;i < 1001;i++)
        {
            while(h[i]--)
            {
                arr1[j++] = i;
            }
        }

        return arr1;
    }
};
// @lc code=end

