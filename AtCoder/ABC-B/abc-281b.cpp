#include "bits/stdc++.h"
#include <cctype>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    string s; cin >> s;
    if (s.size() != 8) cout << "No" << endl;
    else {
        bool flag = true;
        if (!isupper(s[0]) or !isupper(s[7])) flag = false;
        for (int i = 1; i < 7; i ++) {
            if (!isdigit(s[i])) {flag = false; break;}
        }

        if (!isdigit(s[1]) or s[1] == '0') flag = false;

        cout << (flag ? "Yes" : "No") << endl;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}