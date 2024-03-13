#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=2696 lang=cpp
 *
 * [2696] Minimum String Length After Removing Substrings
 */

// @lc code=start
class Solution {
public:
    int minLength(string s) {
        string stk;

        for (auto c : s) {
            if (stk.empty()) stk.push_back(c);
            else {
                if (c == 'B' and stk.back() == 'A') stk.pop_back();
                else if (c == 'D' and stk.back() == 'C') stk.pop_back();
                else stk.push_back(c);
            }
        }

        return stk.size();
    }
};
// @lc code=end

