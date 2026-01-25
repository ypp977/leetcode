/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution
{
public:
    vector<string> readBinaryWatch(int num)
    {
        vector<string> result; // 用于存储所有符合条件的时间结果

        // 1. 外层循环：遍历所有可能的小时 (0 到 11)
        for (int hours = 0; hours < 12; hours++)
        {
            // 2. 内层循环：遍历所有可能的分钟 (0 到 59)
            for (int minute = 0; minute < 60; minute++)
            {
                // 3. 核心判断逻辑
                // __builtin_popcount(n) 是一个内置函数，用于计算 n 的二进制表示中有多少个 '1'。
                // 如果 (小时里的 1 的个数) + (分钟里的 1 的个数) 正好等于输入的 num (亮灯总数)
                if (__builtin_popcount(hours) + __builtin_popcount(minute) == num)
                {
                    // 4. 格式化输出字符串
                    string temp = "";
                    temp += to_string(hours) + ":"; // 拼接小时和冒号

                    // 如果分钟是个位数（比如 5 分），需要在前面补一个 '0' (变成 "05")
                    if (minute < 10)
                    {
                        temp += "0";
                    }
                    temp += to_string(minute); // 拼接分钟

                    result.push_back(temp); // 将这个符合条件的时间加入结果列表
                }
            }
        }
        return result;
    }
};
// @lc code=end

