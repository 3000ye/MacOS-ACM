#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {
        string stk;

        for (auto c : s) {
            if (stk.empty() or abs(stk.back() - c) != 32) stk.push_back(c);
            else stk.pop_back();
        }

        return stk;
    }
};
// @lc code=end

