#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        subFunction(root, res);

        return res;
    }

    void subFunction(TreeNode* root, vector<int>& res) {
        if (root == nullptr) return;
        else {
            subFunction(root->left, res);
            res.push_back(root->val);
            subFunction(root->right, res);
        }
    }
};
// @lc code=end

