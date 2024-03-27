#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    vector<vector<bool>> dp(n, vector<bool>(2, false));
    dp[0][0] = true;
    dp[0][1] = true;

    rep(i, n-1) {
        if(dp[i][0]) {
            if(abs(a[i] - a[i+1]) <= k) dp[i+1][0] = true;
            if(abs(a[i] - b[i+1]) <= k) dp[i+1][1] = true;
        }
        if(dp[i][1]) {
            if(abs(b[i] - a[i+1]) <= k) dp[i+1][0] = true;
            if(abs(b[i] - b[i+1]) <= k) dp[i+1][1] = true;
        }
    }

    if(dp[n-1][0] || dp[n-1][1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}