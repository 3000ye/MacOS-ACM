# AtCoder ABC-B

## [ABC-291B](https://atcoder.jp/contests/abc291/tasks/abc291_b)

### 题解：

```cpp
#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    vector<int> ls(5 * n);

    for (int i = 0; i < 5 * n; i ++) cin >> ls[i];
    sort(ls.begin(), ls.end());

    ld sum = 0;
    for (int i = n; i < n * 4; i ++) sum += ls[i];

    ld ans = sum / (n * 3);
    printf("%.15LF\n", ans);
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
```

## [ABC-290B](https://atcoder.jp/contests/abc290/tasks/abc290_b)

### 题解

```cpp
#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i ++) {
        char c; cin >> c;

        if (c == 'o' and k > 0) {
            cout << 'o'; k -- ;
        }
        else cout << 'x';
    }
    cout << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
```

