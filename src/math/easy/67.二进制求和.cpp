/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1;
        int n = max(a.size(), b.size());
        string res(n + 1, '0');
        int k = n, carry = 0;
        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if(i >= 0)
            {
                sum += a[i--] - '0';
            }
            if(j >= 0)
            {
                sum += b[j--] - '0';
            }
            res[k--] = char('0' + (sum & 1));
            carry = sum >> 1;
        }
        return res.substr(k + 1);
    }
};
// @lc code=end

