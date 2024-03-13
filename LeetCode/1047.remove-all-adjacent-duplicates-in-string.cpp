#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        string res;

        for (auto c : s) {
            if (res.empty()) res.push_back(c);
            else {
                if (res.back() == c) {
                    while (!res.empty() and res.back() == c) res.pop_back();
                }
                else res.push_back(c);
            }
        }

        return res;
    }
};
// @lc code=end

