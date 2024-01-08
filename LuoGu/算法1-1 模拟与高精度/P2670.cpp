#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

char dic[110][110];

void solve() {
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) cin >> dic[i][j];
    }

    int dx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
    int dy[8] = {1, -1, 0, 1, -1, 0, 1, -1};

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++) {
            int cnt = 0;

            for (int k = 0; k < 8; k ++) {
                if (dic[i + dx[k]][j + dy[k]] == '*') cnt ++;
            }

            if (dic[i][j] == '*') cout << '*';
            else cout << cnt;
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