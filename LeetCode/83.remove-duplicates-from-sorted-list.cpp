#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

typedef ListNode* ListLink;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        auto p = head;
        while (p != nullptr and p->next != nullptr) {
            if (p->val == p->next->val) {
                p->next = p->next->next;
            }
            else p = p->next;
        }

        return head;
    }
};
// @lc code=end

