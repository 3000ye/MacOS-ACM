#include "bits/stdc++.h"
#include <algorithm>
#include <unordered_map>

using namespace std;

#define ll long long
#define ld long double

void solve() {
    int n; cin >> n;
    vector<char> first = {'H', 'D', 'S', 'C'};
    vector<char> second = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    unordered_map<string, int> dic;
    bool flag = true;
    while (n -- ) {
        string s; cin >> s;
        if (dic[s] > 0) flag = false;
        dic[s] ++;

        if (find(first.begin(), first.end(), s[0]) == first.end()) flag = false;
        if (find(second.begin(), second.end(), s[1]) == second.end()) flag = false;
    }

    cout << (flag ? "Yes" : "No") << endl;
}

int main() {
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}