#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    ll const MOD = 998244353;
    vector<vector<ll>> dp(N+1, vector<ll>(K+1, 0));
    dp[0][0] = 1;
    rep(i, N) {
        rep(j, K) {
            rep(k, M) {
                if(j + k + 1 > K) break;
                dp[i+1][j+k+1] += (dp[i][j]) % MOD;
            }
        }
    }
    ll ans = 0;
    rep(i, K) {
        ans += dp[N][i+1];
        ans %= MOD;
    }
    // rep(i, N+1) {
    //     rep(j, K+1) cout << dp[i][j] << ' ';
    //     cout << endl;
    // }
    cout << ans << endl;
    return 0;
}