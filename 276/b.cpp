#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a, b;
    vector<vector<int> > g(n);
    rep(i, m) {
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    rep(i, n) {
        sort(g[i].begin(), g[i].end());
    }

    rep(i, n) {
        cout << g[i].size();
        rep(j, g[i].size()) {
            cout << " " << g[i][j] + 1;
        }
        cout << endl;
    }
    return 0;
}