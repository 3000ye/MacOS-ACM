#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=1078 lang=cpp
 *
 * [1078] Occurrences After Bigram
 */

// @lc code=start
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stack<string> stk;
        vector<string> res;

        string x, y, temp = "";
        text = text + " ";

        for (auto c : text) {
            if (c == ' ') {
                if (!stk.empty()) {
                    x = stk.top(); stk.pop();
                    if (!stk.empty()) y = stk.top();
                    stk.push(x);
                }
                
                if (x == second and y == first) res.push_back(temp);

                stk.push(temp); temp = "";
            }
            else temp += c;
        }

        return res;
    }
};
// @lc code=end

