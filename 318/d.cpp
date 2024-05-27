#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n, 0));
    rep(i, n-1) {
        REP(j, i+1, n) {
            cin >> d[i][j];
            d[j][i] = d[i][j];
        }
    }
    vector<ll> dp(1 << n, 0ll);
    rep(i, (1 << n) - 1) {
        int l = -1;
        rep(j, n) if(!(i >> j & 1)) {
            l = j;
            break;
        }
        rep(j, n) if(!(i >> j & 1)) {
            int nb = i | (1 << l) | (1 << j);
            chmax(dp[nb], dp[i] + d[l][j]);
        }
    }

    cout << dp.back() << endl;
    return 0;
}