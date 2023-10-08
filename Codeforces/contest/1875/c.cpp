#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;

    int k = m / __gcd(n, m);
    ll ans = 0;
    while (k % 2 == 0) {ans += n % m; n = n * 2; k = k / 2;}

    if (k != 1) cout << "-1" << endl;
    else cout << ans << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}