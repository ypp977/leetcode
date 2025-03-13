/*
 * @lc app=leetcode.cn id=717 lang=cpp
 *
 * [717] 1 比特与 2 比特字符
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len = bits.size();
        int i = 0;
        while(i < len -1) {
            if(bits[i] == 1) {
                i += 2;
            }
            else {
                i++;
            }
        }
        return i == len - 1;
    }
};
// @lc code=end

