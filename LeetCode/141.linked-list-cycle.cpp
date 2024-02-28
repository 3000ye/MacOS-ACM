#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        // 暴力
        // if (!head) return false;

        // int cnt = 0;
        // while (cnt < 10010) {
        //     if (head->next == nullptr) return false;

        //     head = head->next;
        //     cnt ++;
        // }

        // return true;

        // 快慢指针
        auto fast = head, low = head;
        while (fast and fast->next) {
            fast = fast->next->next;
            low = low->next;

            if (fast == low) return true;
        }

        return false;
    }
};
// @lc code=end

