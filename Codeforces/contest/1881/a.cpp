#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    string x, y; cin >> x >> y;

    bool flag = false;
    for (int i = 0; i < 6; i ++) {
        if (x.find(y) != string::npos) {
            cout << i << endl;
            flag = true; break;
        }

        x = x + x;
    }

    if (!flag) cout << -1 << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}