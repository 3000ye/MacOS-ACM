#include "bits/stdc++.h"
#include <queue>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    queue<int> que;

    que.push(1); que.push(2);

    cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;
}

int add(int a, in b) {
    int c = a + b;
    cout << a << b << c << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
