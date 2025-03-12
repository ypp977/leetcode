/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
class Element {
public:
    int freq;
    int left;
    int right;
    Element() {
        freq = 0;
        left = 0;
        right = 0;
    }
};
class Solution
{
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,Element> mp;
        int n = nums.size();
        int minlen = 0;
        int maxfreq = 0;
        for(int i = 0; i < n; i++) {
            if(mp.count(nums[i]) == 0) {
                mp[nums[i]].freq = 1;
                mp[nums[i]].left = i;
                mp[nums[i]].right = i;
            } else {
                mp[nums[i]].freq++;
                mp[nums[i]].right = i;
            }

            if(maxfreq < mp[nums[i]].freq)
            {
                maxfreq = mp[nums[i]].freq;
                minlen = mp[nums[i]].right - mp[nums[i]].left + 1;
            } else if(maxfreq == mp[nums[i]].freq) {
                minlen = min(minlen, mp[nums[i]].right - mp[nums[i]].left + 1);
            }
        }
        return minlen;
    }
};
// @lc code=end

