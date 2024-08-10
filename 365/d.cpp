#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n;
    string s;
    cin >> n >> s;
    vector<vector<int>> dp(n+1, vector<int>(3, 0));
    rep(i, n) {
        rep(j, 3) {
            if(s[i] == 'R') {
                dp[i+1][0] = max(dp[i][1], dp[i][2]);
                dp[i+1][2] = max(dp[i][0] + 1, dp[i][1] + 1);
            } else if(s[i] == 'P') {
                dp[i+1][1] = max(dp[i][0] + 1, dp[i][2] + 1);
                dp[i+1][2] = max(dp[i][0], dp[i][1]);
            } else {
                dp[i+1][0] = max(dp[i][1] + 1, dp[i][2] + 1);
                dp[i+1][1] = max(dp[i][0], dp[i][2]);
            }
        }
    }
    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
    return 0;
}