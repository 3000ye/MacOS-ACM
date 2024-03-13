#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1614 lang=cpp
 *
 * [1614] Maximum Nesting Depth of the Parentheses
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int res = 0;
        for (auto c : s) {
            if (c != '(' and c != ')') continue;
            if (stk.empty()) stk.push(c);
            else {
                if (stk.top() == '(' and c == ')') stk.pop();
                else stk.push(c);
            }

            res = max(res, int(stk.size()));
        }

        return res;
    }
};
// @lc code=end

