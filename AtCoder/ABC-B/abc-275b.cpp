#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    ll a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    ll ans = a * b * c - d * e * f;
    ll mod = 998244353;

    ans = ((ans + mod) % mod + mod) % mod;
    cout << ans << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}