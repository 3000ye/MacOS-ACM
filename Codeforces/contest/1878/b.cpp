#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    int x = 1;

    while (n -- ) {
        cout << x << " ";
        x += 2;
    }
    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    int T; cin >> T;
    while (T -- ) solve();
    return 0;
}