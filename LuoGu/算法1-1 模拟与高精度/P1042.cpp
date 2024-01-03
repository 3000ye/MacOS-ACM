#include "bits/stdc++.h"
#include <vector>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    char c; vector<char> ls;
    vector<pair<int, int>> res1, res2;

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    while (cin >> c and c != 'E') {
        if (c == 'W') x1 ++, x2 ++;
        if (c == 'L') y1 ++, y2 ++;

        if ((x1 >= 11 or y1 >= 11) and abs(x1 - y1) >= 2) {
            res1.push_back({x1, y1});
            x1 = 0; y1 = 0;
        }

        if ((x2 >= 21 or y2 >= 21) and abs(x2 - y2) >= 2) {
            res2.push_back({x2, y2});
            x2 = 0; y2 = 0;
        }
    }

    res1.push_back({x1, y1});
    res2.push_back({x2, y2});

    for (auto i : res1) {
        cout << i.first << ":" << i.second << endl;
    }

    cout << endl;

    for (auto i : res2) {
        cout << i.first << ":" << i.second << endl;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}