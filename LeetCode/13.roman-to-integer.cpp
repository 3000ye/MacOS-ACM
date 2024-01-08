#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> dic = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int cnt = 0;
        for (int i = 0, l = s.size(); i < l; i ++) {
            char c = s[i];

            if (c == 'I') {
                if (s[i + 1] == 'V') { cnt += 4, i ++; }
                else if (s[i + 1] == 'X') { cnt += 9, i ++; }
                else cnt += dic[c];
            }
            else if (c == 'X') {
                if (s[i + 1] == 'L') { cnt += 40, i ++; }
                else if (s[i + 1] == 'C') { cnt += 90, i ++; }
                else cnt += dic[c];
            }
            else if (c == 'C') {
                if (s[i + 1] == 'D') { cnt += 400, i ++; }
                else if (s[i + 1] == 'M') { cnt += 900, i ++; }
                else cnt += dic[c];
            }
            else cnt += dic[c];
        }

        return cnt;
    }
};
// @lc code=end

