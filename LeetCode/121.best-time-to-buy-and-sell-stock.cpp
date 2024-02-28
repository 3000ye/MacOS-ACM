#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = 99999999, res = 0;

        for (auto i : prices) {
            m = min(m, i);
            res = max(res, i - m);
        }

        return res;
    }
};
// @lc code=end

