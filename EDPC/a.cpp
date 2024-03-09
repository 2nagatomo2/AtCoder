#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n+1, 0);
    rep(i, n) cin >> h[i+1];
    
    const int INF = 1e9;
    vector<int> dp(n+1, INF);
    dp[1] = 0;
    REP(i, 1, n) {
        if(i == n-1) {
            dp[i+1] = min(dp[i+1], dp[i] + abs(h[i] - h[i+1]));
        } else {
            dp[i+1] = min(dp[i+1], dp[i] + abs(h[i] - h[i+1]));
            dp[i+2] = min(dp[i+2], dp[i] + abs(h[i] - h[i+2]));
        }
    }

    cout << dp[n] << endl;
    return 0;
}