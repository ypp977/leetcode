/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int getNext(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> record;

        while(n != 1 && record.find(n) == record.end())
        {
            record.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};
// @lc code=end

