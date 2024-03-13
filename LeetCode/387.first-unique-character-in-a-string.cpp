#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int ls[200];

        for (auto c : s) { ls[c] ++; }

        for (int i = 0, l = s.size(); i < l; i ++) {
            if (ls[s[i]] == 1) return i;
        }

        return -1;
    }
};
// @lc code=end

