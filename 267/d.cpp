#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    ll a[n];
    rep(i, n) cin >> a[i];

    vector<vector<ll>> dp(n, vector<ll>(m+1, 0));
    dp[0][1] = a[0];
    REP(i, 1, n) {
        REP(j, 1, min(i+2, m+1)) {
            if(i+2 <= m+1 && j == i+1) dp[i][j] = dp[i-1][j-1] + a[i] * j;
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + (a[i] * j));
        }
    }

    cout << dp[n-1][m] << endl;
    return 0;
}