#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */

// @lc code=start
class MyStack {
private:
    int stk[200];
    int head;
public:
    MyStack() : head(-1) {}

    void push(int x) {
        stk[++ head] = x;
    }
    
    int pop() {
        return stk[head --];
    }
    
    int top() {
        return stk[head];
    }
    
    bool empty() {
        return head == -1;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

