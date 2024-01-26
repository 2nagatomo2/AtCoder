#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k, d;
    cin >> n >> k >> d;
    ll a[n];
    rep(i, n) cin >> a[i];
    ll dp[n+1][k+1][d];
    rep(i, n+1) rep(j, k+1) rep(l, d) dp[i][j][l] = -1;
    dp[0][0][0] = 0;

    rep(i, n) {
        rep(j, k+1) {
            rep(l, d) {
                if(dp[i][j][l] == -1) continue;
                dp[i+1][j][l] = max(dp[i+1][j][l], dp[i][j][l]);
                if(j != k) {
                    dp[i+1][j+1][(l+a[i]) % d] = max(dp[i+1][j+1][(l+a[i]) % d], dp[i][j][l] + a[i]);
                }
            }
        }
    }

    cout << dp[n][k][0] << endl; 
    return 0;
}