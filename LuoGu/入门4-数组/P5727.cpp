#include "bits/stdc++.h"
#include <vector>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;

    vector<int> ls;
    while (n != 1) {
        ls.push_back(n);

        if (n & 1) n = n * 3 + 1;
        else n = n / 2;
    }

    ls.push_back(1);
    for (int i = ls.size(); i > 0; i --) {
        cout << ls[i - 1] << " ";
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}