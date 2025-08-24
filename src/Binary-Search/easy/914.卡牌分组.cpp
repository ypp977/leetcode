/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;

        for(int &x: deck)
        {
            mp[x]++;
        }
        int gcd = mp[deck[0]];

        for(auto &[x, y]: mp)
        {
            gcd = __gcd(gcd, y);
        }
        return gcd > 1;
    }
};
// @lc code=end

