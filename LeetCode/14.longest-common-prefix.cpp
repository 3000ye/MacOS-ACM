#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "", head = strs[0];

        for (int i = 0, l = head.size(); i < l; i ++) {
            bool flag = true;

            for (auto str : strs) {
                if (i >= str.size() or str[i] != head[i]) {
                    flag = false; break;
                }
            }

            if (flag) res += head[i];
            else break;
        }

        return res;
    }
};
// @lc code=end

