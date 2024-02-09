#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int t[n], x[n], a[n];
    rep(i, n) {
        cin >> t[i] >> x[i] >> a[i];
    }
    vector<vector<ll> > dp(t[n-1]+1, vector<ll>(5, 0));
    int idx = 0;
    for(int i=1; i<=t[n-1]; i++) {
        rep(j, 5) {
            dp[i][j] = dp[i-1][j];
            if(j != 0) dp[i][j] = max(dp[i][j], dp[i-1][j-1]);
            if(j != 4) dp[i][j] = max(dp[i][j], dp[i-1][j+1]);
        }
        if(t[idx] == i) {
            if(t[idx] >= x[idx]) {
                dp[t[idx]][x[idx]] += a[idx];
            }
            idx++;
        }
    }
        
    ll ans = 0;
    rep(i, 5) {
        ans = max(ans, dp[t[n-1]][i]);
    }
    cout << ans << endl;
    return 0;
}