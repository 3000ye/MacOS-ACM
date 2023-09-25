#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    vector<string> ls(n);
    for (int i = 0; i < n; i ++) cin >> ls[i];

    int ans = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = i + 1; j < n; j ++) {
            bool flag = true;

            for (int k = 0; k < m; k ++) {
                if (ls[i][k] == 'x' and ls[j][j] == 'x') {
                    flag = false; break;
                }
            }

            if (flag) ans ++;
        }
    }

    cout << ans << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}