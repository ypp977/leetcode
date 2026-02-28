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
        while(n)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast = n,slow = n;
        do
        {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
            if(fast == 1)
            {
                return true;
            }
        } while (slow != fast);
        return false;
    }
};
// @lc code=end

