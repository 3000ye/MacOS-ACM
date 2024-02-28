#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0, r = 0;
        while (l < s.size() and r < t.size()) {
            if (s[l] == t[r]) l ++;
            
            r ++;
        }

        if (l == s.size()) return true;
        else return false;
    }
};
// @lc code=end

