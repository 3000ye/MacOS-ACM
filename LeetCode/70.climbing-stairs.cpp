#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        vector<int> ls = {1, 1};

        while (n > ls.size() - 1) {
            int x = ls[ls.size() - 1];
            int y = ls[ls.size() - 2];
            ls.push_back(x + y);
        }

        return ls[n];
    }
};
// @lc code=end

