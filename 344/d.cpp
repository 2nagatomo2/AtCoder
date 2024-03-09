#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    string t;
    int n;
    cin >> t >> n;
    vector<vector<string>> s(n);
    int a[n];
    rep(i, n) {
        cin >> a[i];
        s[i].resize(a[i]);
        rep(j, a[i]) {
            cin >> s[i][j];
        }
    }

    const int INF = 1e9;
    vector<vector<int>> dp(n + 1, vector<int>(t.length() + 1, INF));
    dp[0][0] = 0;
    REP(i, 1, n+1) {
        rep(j, t.length() + 1) {
            dp[i][j] = dp[i-1][j];
            for(string x : s[i-1]) {
                if(x.length() <= j) {
                    if(t.substr(j - x.length(), x.length()) == x) {
                        dp[i][j] = min(dp[i][j], dp[i-1][j - x.length()]+1);
                    }
                }
            }
        }
    }

    if(dp[n][t.length()] == INF) cout << -1 << endl;
    else cout << dp[n][t.length()] << endl;
    return 0;
}