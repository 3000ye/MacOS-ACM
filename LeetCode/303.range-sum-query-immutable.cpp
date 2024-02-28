#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 */

// @lc code=start
class NumArray {
public:
    NumArray(vector<int>& nums) {
        
    }
    
    int sumRange(int left, int right) {
        int res = 0;
        for (int i = left - 1; i < right; i ++) {
            res += nums
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

