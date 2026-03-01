/*
 * @lc app=leetcode.cn id=989 lang=cpp
 *
 * [989] 数组形式的整数加法
 */

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> res;
        res.reserve(max((int)num.size(), k));

        int i = num.size() - 1;
        int carry = 0;
        while(i >= 0 || k > 0 || carry > 0)
        {
            int sum = carry;

            if(i >= 0)
            {
                sum += num[i--];
            }

            if(k > 0)
            {
                sum += k % 10;
                k /= 10;
            }

            res.push_back(sum % 10);
            carry = sum / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

