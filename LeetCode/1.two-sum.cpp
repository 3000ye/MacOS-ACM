#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;

        for (int i = 0, l = nums.size(); i < l; i ++) {
            for (int j = i + 1; j < l; j ++) {
                if (nums[i] + nums[j] == target) {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }

        return res;
    }
};
// @lc code=end

