#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; string s;
    cin >> n >> s;

    for (int i = 1; i < n; i ++) {
        int l = 0, idx = 0;
        // cout << "================" << endl;
        // cout << i << endl;
        while (idx + i < n and s[idx] != s[idx + i]) {
            // cout << s[idx] << " " << s[idx + i] << endl;
            l ++; idx ++;
        }

        cout << l << endl;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}