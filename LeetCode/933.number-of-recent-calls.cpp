#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=933 lang=cpp
 *
 * [933] Number of Recent Calls
 */

// @lc code=start
class RecentCounter {
private:
    queue<int> que;

public:
    RecentCounter() {}
    
    int ping(int t) {
        que.push(t);
        while (que.back() - que.front() > 3000) que.pop();
        
        return que.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
// @lc code=end

