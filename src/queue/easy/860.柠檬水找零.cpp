/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        queue<int> five;
        queue<int> ten;

        for(int i = 0; i < bills.size(); i++)
        {
            if(bills[i] == 5)
            {
                five.push(bills[i]);
            }
            else if(bills[i] == 10)
            {
                if(five.empty())
                {
                    return false;
                }
                else
                {
                    five.pop();
                    ten.push(bills[i]);
                }
            }
            else
            {
                if(!ten.empty() && !five.empty())
                {
                    ten.pop();
                    five.pop();
                }
                else if(five.size() >= 3)
                {
                    for(int i = 0; i < 3; i++)
                    {
                        five.pop();
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

