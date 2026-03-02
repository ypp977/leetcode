/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size() < 2)
        {
            return false;
        }
        unordered_map<int, int> freq;
        for(int x : deck)
        {
            ++freq[x];
        }

        int g = 0;
        for(auto &[num,cnt] : freq)
        {
            g = gcd(g, cnt);
        }

        return g > 1;
    }
};
// @lc code=end

