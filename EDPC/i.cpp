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
    int n;
    cin >> n;
    vector<double> p(n);
    rep(i, n) cin >> p[i];
    vector<vector<double>> dp(n+1, vector<double>(n+1, 0));
    dp[0][0] = 1;
    REP(i, 1, n+1) {
        REP(j, 0, i+1) {
            if(j == 0) {
                dp[i][0] += dp[i-1][0] * (1 - p[i-1]);
            }
            else {
                dp[i][j] += dp[i-1][j-1] * p[i-1];
                dp[i][j] += dp[i-1][j] * (1 - p[i-1]);
            }
        }
    }

    double ans = 0;
    REP(i, (n+1)/2, n+1) {
        ans += dp[n][i];
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}