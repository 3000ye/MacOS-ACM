#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    vector<int> ls(5 * n);

    for (int i = 0; i < 5 * n; i ++) cin >> ls[i];
    sort(ls.begin(), ls.end());

    ld sum = 0;
    for (int i = n; i < n * 4; i ++) sum += ls[i];

    ld ans = sum / (n * 3);
    printf("%.15LF\n", ans);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}