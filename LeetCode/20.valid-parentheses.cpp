#include <bits/stdc++.h>
#include <stack>
using namespace std;

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (auto c : s) {
            if ( stk.size() == 0) stk.push(c);
            else if (stk.top() == '(' and c == ')') stk.pop();
            else if (stk.top() == '[' and c == ']') stk.pop();
            else if (stk.top() == '{' and c == '}') stk.pop();
            else stk.push(c);
        }

        return stk.size() == 0 ? true : false;
    }
};
// @lc code=end

