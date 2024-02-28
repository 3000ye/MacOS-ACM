#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

typedef ListNode* ListLink;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListLink res = new ListNode(0);

        auto p = res, p1 = list1, p2 = list2;
        while (p1 and p2) {
            if (p1->val < p2->val) {
                p->next = p1;
                p1 = p1->next;
            }
            else {
                p->next = p2;
                p2 = p2->next;
            }

            p = p->next;
        }

        while (p1) {
            p->next = p1;
            p1 = p1->next;
            p = p->next;
        }

        while (p2) {
            p->next = p2;
            p2 = p2->next;
            p = p->next;
        }

        return res->next;
    }
};
// @lc code=end

