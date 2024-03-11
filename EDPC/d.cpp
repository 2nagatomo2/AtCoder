#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int N, W;
    cin >> N >> W;
    vector<int> w(N);
    vector<ll> v(N);
    rep(i, N) cin >> w[i] >> v[i];

    vector<vector<ll>> dp(N+1, vector<ll>(W+1, -1));
    for(int i = 0; i < N; i++) {
        dp[i][0] = 0;
        for(int j = 0; j <= W; j++) {
            if(dp[i][j] == -1) continue;
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            if(j + w[i] > W) continue;
            dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j] + v[i]); 
        }
    }
    
    ll ans = 0;
    rep(i, W+1) {
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
    return 0;
}