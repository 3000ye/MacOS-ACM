#include <bits/stdc++.h>
#include <stack>
using namespace std;

/*
 * @lc app=leetcode id=1021 lang=cpp
 *
 * [1021] Remove Outermost Parentheses
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string res;

        for (auto c : s) {
            if (stk.empty()) stk.push(c);
            else {
                if (c == '(') {  // stk 必定不为空
                    res += c;
                    stk.push(c);
                }
                else {
                    stk.pop();
                    if (!stk.empty()) res += c;
                }
            }
        }

        return res;
    }
};
// @lc code=end

