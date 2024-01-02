#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> m;
        int l = nums.size();
        for (int i = 0; i < l; ++i) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < l; ++i) {
            if (m.count(target - nums[i]) && i != m[target - nums[i]]) {
                return {i, m[target - nums[i]]};
            }
        }
        return {0, 0};
    }
};
// @lc code=end
