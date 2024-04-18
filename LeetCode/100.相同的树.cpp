#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=100 lang=cpp
 *
 * [100] 相同的树
 */

// @lc code=start
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr and q == nullptr) return true;
        else if ((p == nullptr and q != nullptr) or (p != nullptr and q == nullptr)) return false;
        else {
            if (p->val == q->val) return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
            else return false;
        }
    }
};
// @lc code=end

