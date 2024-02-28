#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> stk;
        int flag[10010];
        memset(flag, -1, sizeof(flag));

        for (auto i : nums2) {
            while (!stk.empty() and stk.top() < i) {
                int x = stk.top();
                flag[x] = i;
                stk.pop();
            }

            stk.push(i);
        }

        vector<int> res(nums1.size(), -1);
        for (int i = 0, l = nums1.size(); i < l; i ++) {
            res[i] = flag[nums1[i]];
        }

        return res;
    }
};
// @lc code=end

