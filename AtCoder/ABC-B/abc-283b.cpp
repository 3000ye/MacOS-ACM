#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    vector<int> ls(n);
    for (int i = 0; i < n; i ++) cin >> ls[i];

    int q; cin >> q;
    while (q -- ) {
        int op; cin >> op;

        if (op == 1) {
            int k, x; cin >> k >> x;
            ls[k - 1] = x;
        }
        else {
            int k; cin >> k; cout << ls[k - 1] << endl;
        }
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}