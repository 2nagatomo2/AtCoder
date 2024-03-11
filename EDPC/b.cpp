#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n+1, 0);
    rep(i, n) cin >> h[i+1];

    const int INF = 1e9;
    vector<int> dp(n+1, INF);
    dp[1] = 0;
    REP(i, 1, n) {
        if(i + k > n) {
            for(int j = i+1; j <= n; j++) {
                dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
            }
        } else {
            for(int j = i+1; j <= i+k; j++) {
                dp[j] = min(dp[j], dp[i] + abs(h[i] - h[j]));
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}