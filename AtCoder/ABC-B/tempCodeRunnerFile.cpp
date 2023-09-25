#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    string s, t; cin >> s >> t;
    if (s.size() < t.size()) {cout << "No" << endl; return;}

    int idx = 0, ls = s.size(), lt = t.size();
    bool flag = false;
    while (idx + lt < ls) {
        bool temp = true;
        for (int i = 0; i < lt; i ++) {
            if (s[i + idx] != t[i]) {temp = false; break;}
        }

        if (temp) {flag = true; break;}
        idx ++;
    }

    cout << (flag ? "Yes" : "No") << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}