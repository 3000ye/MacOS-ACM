#include <bits/stdc++.h>
#include <stack>
using namespace std;

/*
 * @lc app=leetcode id=1475 lang=cpp
 *
 * [1475] Final Prices With a Special Discount in a Shop
 */

// @lc code=start
typedef pair<int, int> pii;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<pii> stk;  // 递增单调栈

        for (int i = 0, l = prices.size(); i < l; i ++) {
            if (!stk.empty() and prices[i] <= stk.top().first) {
                while (!stk.empty() and prices[i] <= stk.top().first) {
                    prices[stk.top().second] -= prices[i];
                    stk.pop();
                }
            }

            stk.push({prices[i], i});
        }

        return prices;
    }
};
// @lc code=end

