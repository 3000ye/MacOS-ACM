#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    vector<int> ls(m);

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j ++) {
            char c; cin >> c;
            if (c == '#') ls[j] ++;
        }
    }

    for (auto i : ls) cout << i << " ";
    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}