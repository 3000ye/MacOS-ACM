#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
// Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // headA 和 headB 长度不一致，但是尾部相同
        // 即 headA = preA + tail, headB = preB + tail
        // 因此直接找 headA + headB 和 headB + headA 的相同尾部

        auto p = headA, q = headB;

        while (p != q) {
            if (!p) p = headB;
            else p = p->next;

            if (!q) q = headA;
            else q = q->next;
        }

        return p;
    }
};
// @lc code=end

