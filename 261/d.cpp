#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int x[n];
    rep(i, n) cin >> x[i];
    map<int, int> bonus;
    int c, y;
    rep(i, m) {
        cin >> c >> y;
        bonus[c] = y;
    }

    ll dp[n+1][n+1];
    dp[0][0] = 0;
    rep(i, n) {
        dp[i+1][0] = 0;
        rep(j, i+1) {
            dp[i+1][0] = max(dp[i+1][0], dp[i][j]);
            dp[i+1][j+1] = dp[i][j] + x[i] + bonus[j+1];
        }
    }

    ll ans = 0;
    rep(i, n+1) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}