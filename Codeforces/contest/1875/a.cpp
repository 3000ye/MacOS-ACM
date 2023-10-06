#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int a, b, n; cin >> a >> b >> n;

    ll res = 0;
    while (n -- ) {
        int x; cin >> x;

        if (x >= a) res += a - 1;
        else res += x;
    }

    cout << res + b << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}