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
    int n, m, x, y;
    cin >> n >> m;
    vector<int> p(n);
    p[0] = 0;
    rep(i, n-1) {
        cin >> p[i+1];
        p[i+1]--;
    }
    vector<int> dp(n, -1);
    rep(i, m) {
        cin >> x >> y;
        x--;
        chmax(dp[x], y);
    }

    rep(i, n) if(i != 0) chmax(dp[i], dp[p[i]] - 1);

    int ans = 0;
    rep(i, n) if(dp[i] >= 0) ans++;
    cout << ans << endl;
    return 0;
}