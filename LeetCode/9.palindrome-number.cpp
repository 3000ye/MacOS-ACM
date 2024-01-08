#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        vector<int> ls;

        while (x != 0) {
            int y = x % 10;
            x = x / 10;
            ls.push_back(y);
        }

        bool flag = true;
        for (int i = 0, l = ls.size(); i < l; i ++) {
            if (ls[i] != ls[l - i - 1]) {
                flag = false; break;
            }
        }

        return flag;
    }
};
// @lc code=end

