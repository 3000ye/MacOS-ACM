#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1128 lang=cpp
 *
 * [1128] Number of Equivalent Domino Pairs
 */

// @lc code=start
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int cnt[110];
        for (auto i : dominoes) {
            if (i[0] < i[1]) cnt[i[0] * 10 + i[1]] ++;
            else cnt[i[1] * 10 + i[0]] ++;
        }

        int res = 0;
        for (auto i : cnt) {
            if (i <= 1) continue;
            res += i * (i - 1) / 2;
        }

        return res;
    }
};
// @lc code=end

