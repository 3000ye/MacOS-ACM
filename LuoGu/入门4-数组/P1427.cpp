#include "bits/stdc++.h"
#include <vector>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    vector<int> ls;
    int x;

    while (cin >> x and x != 0) {
        ls.push_back(x);
    }

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