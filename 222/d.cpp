#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    int a[n], b[n], max_b = 0;
    rep(i, n) cin >> a[i];
    rep(i, n) {
        cin >> b[i];
        chmax(max_b, b[i]);
    }
    ll dp[n][max_b+1];
    const ll MOD = 998244353;
    rep(i, max_b+1) {
        if(i < a[0] || i > b[0]) dp[0][i] = 0;
        else dp[0][i] = 1;
    }
    
    REP(i, 1, n) {
        ll tmp = 0;
        rep(j, max_b+1) {
            if(j == 0) {
                if(a[i] == 0) dp[i][0] = dp[i-1][0];
                else {
                    dp[i][0] = 0;
                    tmp += dp[i-1][0];
                }
            } else {
                if(j < a[i]) {
                    dp[i][j] = 0;
                    tmp += dp[i-1][j];
                    tmp %= MOD;
                } else if(j == a[i]) {
                    dp[i][j] = tmp + dp[i-1][j];
                    dp[i][j] %= MOD;
                } else if(j > b[i]) {
                    dp[i][j] = 0;
                } else {
                    dp[i][j] = dp[i][j-1] + dp[i-1][j];
                    dp[i][j] %= MOD;
                }
            }
        }
    }
    
    ll ans = 0;
    rep(i, max_b+1) {
        ans += dp[n-1][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}