#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    rep(i, n) cin >> a[i] >> b[i];

    vector<vector<bool>> dp(n+1, vector<bool>(x+1, false));
    dp[0][0] = true;
    rep(i, n) {
        rep(j, x+1) {
            if(dp[i][j] && j + a[i] <= x) {
                dp[i+1][j+a[i]] = true;
            }
            if(dp[i][j] && j + b[i] <= x) {
                dp[i+1][j+b[i]] = true;
            }
        }
    }
    
    if(dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}