#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    s = s + "o";
    for (int i = 0; i < n; i ++) {
        if (s[i] == 'n' and s[i + 1] == 'a') {cout << "nya"; i ++;}
        else cout << s[i];
    }
    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}