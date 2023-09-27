#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, k; cin >> n >> k;

    bool flag = false;
    while (n -- ) {
        int x; cin >> x;
        if (x == k) flag = true;
    }

    cout << (flag ? "Yes" : "No") << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}