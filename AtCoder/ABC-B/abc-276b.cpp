#include "bits/stdc++.h"
#include <unordered_map>
#include <vector>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, m; cin >> n >> m;
    unordered_map<int, vector<int>> dic;

    while (m -- ) {
        int a, b; cin >> a >> b;
        dic[a].push_back(b); dic[b].push_back(a);
    }

    for (int i = 1; i <= n; i ++) {
        int l = dic[i].size(); cout << l << " ";
        vector<int> ls = dic[i];

        if (l != 0) {
            sort(ls.begin(), ls.end());
            for (auto j : ls) cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}