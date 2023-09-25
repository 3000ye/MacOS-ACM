#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, k; cin >> n >> k;
    vector<string> ls(k);
    for (int i = 0; i < k; i ++) cin >> ls[i];
    for (int i = 0; i < n - k; i ++) {string s; cin >> s;}

    sort(ls.begin(), ls.end());

    for (auto s : ls) cout << s << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}