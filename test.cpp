// #include "bits/stdc++.h"
#include <queue>
#include <iostream>

// #include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define ld long double

int func() {
    return 3;
}

void solve() {
    queue<int> que;

    que.push(1);
    que.push(2);

    cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;
}

int add(int a, int b) {
    int c = a + b;
    cout << a << b << c << endl;
    return c;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
