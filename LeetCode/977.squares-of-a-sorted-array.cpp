#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int l = 0, r = nums.size() - 1;

        for (int k = nums.size() - 1; k >= 0; k --) {
            if (abs(nums[l]) > abs(nums[r])) {
                res[k] = nums[l] * nums[l];
                l ++;
            }
            else {
                res[k] = nums[r] * nums[r];
                r --;
            }
        }

        return res;
    }
};
// @lc code=end

