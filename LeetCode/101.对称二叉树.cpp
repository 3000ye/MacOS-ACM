#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode* root) {
        if (root->left == nullptr and root->right == nullptr) return true;
        else if (root->left != nullptr and root->right != nullptr) return isSame(root->left, root->right);
        else return false;
    }

    bool isSame(TreeNode* left, TreeNode* right) {
        
    }
};
// @lc code=end

