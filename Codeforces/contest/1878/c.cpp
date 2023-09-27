#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    ll n, k, x; cin >> n >> k >> x;

    ll l = (k + 1) * k / 2;
    ll r = (n - k + 1 + n) * k / 2;

    if (l <= x and x <= r) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}