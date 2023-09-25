#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

int ls[20], res[20];

void solve() {
    int n; cin >> n;
    for (int i = 1; i <= n; i ++) {
        cin >> ls[i];
        res[i] = ls[i] - ls[i - 1];

        cout << res[i] << " ";
    }

    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}