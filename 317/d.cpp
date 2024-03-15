#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int N;
    cin >> N;
    vector<int> X(N);
    vector<int> Y(N);
    vector<int> Z(N);
    int sum_Z = 0;
    rep(i, N) {
        cin >> X[i] >> Y[i] >> Z[i];
        sum_Z += Z[i];
    }

    const ll INF = 1e12;
    vector<vector<ll>> dp(N+1, vector<ll>(sum_Z+1, INF));
    dp[0][0] = 0;
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j <= sum_Z; j++) {
            if(dp[i-1][j] != INF) {
                chmin(dp[i][j], dp[i-1][j]);
                chmin(dp[i][j+Z[i-1]], dp[i-1][j] + max(0, (Y[i-1] - X[i-1]) / 2 + 1));
            }
        }
    }

    ll ans = INF;
    REP(i, (sum_Z+1) / 2, sum_Z+1) {
        chmin(ans, dp[N][i]);
    }

    cout << ans << endl;
    return 0;
}