#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    int x = n % m;

    if (x == 0) {cout << 0 << endl; return ;}
    if (m & 1) {cout << -1 << endl; return ;}

    
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}