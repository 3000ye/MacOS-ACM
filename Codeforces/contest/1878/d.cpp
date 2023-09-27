#include "bits/stdc++.h"
#include <algorithm>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, k; string s;
    cin >> n >> k >> s;
    vector<int> l(k), r(k);
    for (auto &x : l) cin >> x;
    for (auto &x: r) cin >> x;

    int q; cin >> q;
    while (q -- ) {
        int x, idx = 0; cin >> x;
        for (; idx < k; idx ++) {
            if (l[idx] <= x and r[idx] >= x) break;
        }

        int a = min(x, l[idx] + r[idx] - x);
        int b = max(x, l[idx] + r[idx] - x);
        reverse(s.begin() + a - 1, s.begin() + b);
    }

    cout << s << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}