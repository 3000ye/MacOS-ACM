#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int m = 0, n = 0;
        int idx = 0;

        for (int i = 0; nums[i]; i ++) {
            n = min(abs(m - nums[i]), n);
            if (nums[i] > m) {
                m = nums[i];
                idx = i;
            }
        }

        if (n >= 2) return idx;
        else return -1;
    }
};
// @lc code=end

