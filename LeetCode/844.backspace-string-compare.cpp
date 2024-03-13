#include <bits/stdc++.h>
#include <stack>
using namespace std;

/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> x, y;
        for (auto c : s) {
            if (c == '#') {
                if (!x.empty()) x.pop();
            }
            else x.push(c);
        }

        for (auto c : t) {
            if (c == '#') {
                if (!y.empty()) y.pop();
            }
            else y.push(c);
        }

        return x == y;
    }
};
// @lc code=end

