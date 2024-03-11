#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int N;
    cin >> N;
    vector<vector<int>> abc(3, vector<int>(N));
    rep(i, N) cin >> abc[0][i] >> abc[1][i] >> abc[2][i];

    vector<vector<int>> dp(N+1, vector<int>(3, 0));

    for(int i = 1; i <= N; i++) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + abc[0][i-1];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + abc[1][i-1];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + abc[2][i-1];
    }

    cout << max(max(dp[N][0], dp[N][1]), dp[N][2]) << endl;
    return 0;
}