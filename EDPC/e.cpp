#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N, W, max_v = 0;
    cin >> N >> W;
    vector<int> w(N), v(N);
    rep(i, N) {
        cin >> w[i] >> v[i];
        max_v += v[i];
    }

    const ll INF = 1e12;
    vector<vector<ll>> dp(N+1, vector<ll>(max_v + 1, INF));
    dp[0][0] = 0;
    for(int i = 1; i <= N; i++) {
        dp[i][0] = 0;
        for(int j = 0; j <= max_v; j++) {
            if(dp[i-1][j] != INF) {
                chmin(dp[i][j], dp[i-1][j]);
                chmin(dp[i][j+v[i-1]], dp[i-1][j] + w[i-1]);
            }
        }
    }

    int ans = 0;
    rep(i, max_v+1) {
        if(dp[N][i] != INF && dp[N][i] <= W) chmax(ans, i);
    }

    cout << ans << endl;
    return 0;
}