#include <bits/stdc++.h>
#include <stack>
using namespace std;

/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;

        for (auto s : operations) {
            if (s == "+") {
                int x = stk.top(); stk.pop();
                int y = stk.top(); stk.pop();

                stk.push(y); stk.push(x); stk.push(x + y);
            }
            else if (s == "D") stk.push(stk.top() * 2);
            else if (s == "C") stk.pop();
            else stk.push(std::stoi(s));
        }

        int sum = 0;
        while (!stk.empty()) {
            sum += stk.top();
            stk.pop();
        }

        return sum;
    }
};
// @lc code=end

