#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=2073 lang=cpp
 *
 * [2073] Time Needed to Buy Tickets
 */

// @lc code=start
typedef pair<int, int> pii;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pii> que;

        for (int i = 0, l = tickets.size(); i < l; i ++) que.push(pii(tickets[i], i));

        int cnt = 0;
        while (1) {
            cnt ++;
            pii temp = que.front();
            que.pop();

            if (temp.second == k and temp.first == 1) return cnt;
            else que.push(pii(temp.first - 1, temp.second));
        }
    }
};
// @lc code=end

