#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        // head = []
        // if (!head) return head;
        
        // head = [x, x, x, ..., y, z]
        while (head and head->val == val) head = head->next;
        // if (!head) return head;

        auto p = head;
        while (p and p->next) {
            if (p->next->val == val) p->next = p->next->next;
            else p = p->next;
        }

        return head;
    }
};
// @lc code=end

