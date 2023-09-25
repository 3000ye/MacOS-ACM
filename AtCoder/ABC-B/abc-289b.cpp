#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

bool cmp(int a, int b) {return a > b;}

void solve() {
    int n, m; cin >> n >> m;
    vector<int> ls;
    for (int i = 0; i < m; i ++) {
        int k; cin >> k;

        // 输出子图
        if (k - 1 == ls[ls.size() - 1]) {
            ls.push_back(ls[ls.size() - 1] + 1);
            sort(ls.begin(), ls.end(), cmp);

            for (auto i : ls) cout << i << " ";

            // 清空 vector
            while (ls.size() > 0) ls.pop_back();
            // 存入当前节点
            ls.push_back(k);
        }
        else {ls.push_back(k);}
    }

    if (ls.size()) {
            ls.push_back(ls[ls.size() - 1] + 1);
            sort(ls.begin(), ls.end(), cmp);

            for (auto i : ls) cout << i << " ";
    }
    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}