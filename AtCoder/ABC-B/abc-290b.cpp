#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i ++) {
        char c; cin >> c;

        if (c == 'o' and k > 0) {
            cout << 'o'; k -- ;
        }
        else cout << 'x';
    }
    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}