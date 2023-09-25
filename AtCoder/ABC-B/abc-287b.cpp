#include "bits/stdc++.h"
#include <string>
#include <unordered_map>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    vector<string> ls(n);
    unordered_map<string, int> dic;

    for (int i = 0; i < n; i ++) cin >> ls[i];
    for (int i = 0; i < m; i ++) {
        string s; cin >> s; dic[s] ++;
    }

    int ans = 0;
    for (auto s : ls) {
        string temp(s.begin() + 3, s.end());

        if (dic[temp] != 0) ans ++;
    }

    cout << ans << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}