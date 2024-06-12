/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // 初始化结果向量，所有元素初始值为1，因为杨辉三角每行的开始和结束元素都是1
        vector<int> res(rowIndex+1, 1);
        // 从第二行开始遍历到目标行，逐行右往左累加计算杨辉三角的值
        for(int i = 1;i <= rowIndex; i++) {
            // 从行的倒数第二个元素开始向前计算，直到第二个元素
            // 因为每个元素都是上一行的相邻两个元素之和
            for(int j = i -1;j > 0; j--) {
                // res[j] + res[j - 1]就是杨辉三角上一行
                res[j] = res[j] + res[j - 1];
            }
        }
        return res;
    }
};
// @lc code=end

