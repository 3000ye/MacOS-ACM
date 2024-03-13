#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1598 lang=cpp
 *
 * [1598] Crawler Log Folder
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for (auto i : logs) {
            if (i == "../") cnt = max(0, -- cnt);
            else if (i == "./") continue;
            else cnt ++;
        }

        return cnt;
    }
};
// @lc code=end

