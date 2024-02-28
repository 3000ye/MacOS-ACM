#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    vector<int> func(ListLink head) {
        vector<int> ls;

        for (auto p = head; p != nullptr; p = p->next) {
            ls.push_back(p->val);
        }

        // reverse(ls.begin(), ls.end());

        for (auto i : ls) {
            cout << i << " ";
        }
        cout << endl;

        return ls;
    }

    ListLink getRes(vector<int> a, vector<int> b) {
        if (a.size() > b.size()) swap(a, b);

        int add = 0;
        for (int i = 0, l = a.size(); i < l; i ++) {
            int x = (a[i] + b[i]) % 10;
            int temp = (a[i] + b[i]) / 10;
            b[i] = x + add;
            add = temp;
        }

        if (add) {
            if (a.size() == b.size()) {
                if (b[b.size() - 1] + add == 10) {
                    b.push_back(1);
                }
                else b[b.size() - 1] ++;
            }
            else {
                b[a.size()] ++;
            }
        }

        for (auto i : b) {
            cout << i << " ";
        }
        cout << endl;

        reverse(b.begin() + 1, b.end());

        ListLink head = new ListNode(b[0]);
        auto p = head;
        for (int i = 1; i < b.size(); i ++) {
            ListLink temp = new ListNode(b[i], p->next);
            p->next = temp;
        }

        return head;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        auto ls1 = func(l1), ls2 = func(l2);

        return getRes(ls1, ls2);
    }
};
// @lc code=end

