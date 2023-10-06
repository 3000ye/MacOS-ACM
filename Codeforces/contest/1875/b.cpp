#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m, k; cin >> n >> m >> k;
    ll lmn = 1e9, lmx = -1, rmn = 1e9, rmx = -1;
    ll lsum = 0, rsum = 0;

    for (int i = 0; i < n; i ++) {
        ll x; cin >> x; lsum += x;
        lmn = min(x, lmn); lmx = max(x, lmx);
    }
    for (int i = 0; i < m; i++) {
        ll x; cin >> x; rsum += x;
        rmn = min(x, rmn); rmx = max(x, rmx);
    }
    lsum = lsum - lmx - lmn;

    if (k & 1) {
        if (lmn < rmx) swap(lmn, rmx);
    }
    else {
        if (lmn < rmx) swap(lmn, rmx);
        if (lmn > lmx) swap(lmn, lmx);
        if (rmn > rmx) swap(rmn, rmx);
        if (rmn < lmx) swap(rmn, lmx);
    }

    lsum += lmn + lmx;
    cout << lsum << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}