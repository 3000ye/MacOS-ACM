#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=859 lang=cpp
 *
 * [859] Buddy Strings
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string x, string y) {
        if (x.size() != y.size()) return false;

        vector<int> ls;
        for (int i = 0, l = x.size(); i < l; i ++) {
            if (x[i] != y[i]) ls.push_back(i);
        }

        if (ls.size() != 2) return false;
        
        auto a = x[ls[0]], b = x[ls[1]];
        auto c = y[ls[0]], d = y[ls[1]];
        if (a == d and b == c) return true;
        else return false;
    }
};
// @lc code=end

