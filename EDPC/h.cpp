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
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    rep(i, h) cin >> a[i];
    vector<vector<ll>> dp(h+1, vector<ll>(w+1, 0));
    const ll MOD = 1e9+7;
    dp[1][1] = 1;
    rep(i, h) {
        rep(j, w) {
            if(a[i][j] == '.') {
                chmax(dp[i+1][j+1], (dp[i][j+1] + dp[i+1][j]) % MOD);
            }
        }
    }
    cout << dp[h][w] << endl;
    return 0;
}