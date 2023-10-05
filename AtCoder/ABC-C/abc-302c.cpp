#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    vector<string> ls(n);
    for (auto &x : ls) cin >> x;

    sort(ls.begin(), ls.end());
    
    bool flag = true;
    for (int i = 0; i < n - 1; i ++) {
        string l = ls[i], r = ls[i + 1];
        int dif = 0, m = l.size();

        for (int j = 0; j < m; j ++) {
            if (l[j] != r[j]) dif ++;
        }

        if (dif > 1) {flag = false; break;}
    }

    cout << (flag ? "Yes" : "No") << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}