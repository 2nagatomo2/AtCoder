#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int n;
    cin >> n;
    vector<int> a(n), cnt(4, 0);
    rep(i, n) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    vector<vector<vector<double>>> dp(n+2, vector<vector<double>>(n+2, vector<double>(n+2, 0)));
    rep(k, n+1) {
        rep(j, n+1) {
            rep(i, n+1) {
                if(i == 0 && j == 0 && k == 0) continue;
                double e = 1.0 * n / (i + j + k);
                if(i > 0) e += dp[i-1][j][k] * i / (i + j + k);
                if(j > 0) e += dp[i+1][j-1][k] * j / (i + j + k);
                if(k > 0) e += dp[i][j+1][k-1] * k / (i + j + k);
                dp[i][j][k] = e;
            }
        }
    }
    cout << fixed << setprecision(10) << dp[cnt[1]][cnt[2]][cnt[3]] << endl;
    return 0;
}