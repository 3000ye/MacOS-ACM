#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    vector<int> ls(n);

    for (auto &i : ls) cin >> i;

    for (int i = 0; i < n; i ++) {
        int cnt = 0;

        for (int j = 0; j < i; i ++) {
            if (ls[j] < ls[i]) cnt ++;
        }

        cout << cnt ++ << " ";
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}