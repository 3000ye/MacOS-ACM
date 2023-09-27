#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i ++) {
        int k; cin >> k;
        
        ans ++;
        if (ans == k) ans ++;
    }

    cout << ans << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}