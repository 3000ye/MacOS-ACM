#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt[2];
        for (auto s : students) cnt[s] ++;
        for (auto s : sandwiches) {
            if (cnt[s] == 0) break;
            else cnt[s] --;
        }

        return cnt[0] + cnt[1];
    }
};
// @lc code=end

