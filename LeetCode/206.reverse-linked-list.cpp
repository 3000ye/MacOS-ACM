#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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

typedef ListNode* ListLink;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListLink p = head, pre = NULL;

        // 倒序构造新链表
        // p 是逐步缩短的原链表
        // pre 是逐步增加的新链表
        // 每次都将 p 的头节点插到 pre 的头部
        while (p) {
            ListLink temp = p->next;
            p->next = pre;
            pre = p;
            p = temp;
        }

        return pre;
    }
};
// @lc code=end

