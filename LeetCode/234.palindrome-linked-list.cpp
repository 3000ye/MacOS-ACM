#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ls;

        for (auto p = head; p != nullptr; p = p->next) { ls.push_back(p->val); }

        auto temp = ls;
        reverse(temp.begin(), temp.end());

        for (int i = 0, l = ls.size(); i < l; i ++) {
            if (ls[i] != temp[i]) return false;
        }

        return true;
    }
};
// @lc code=end

