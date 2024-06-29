#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int n;
    cin >> n;
    vector<int> a(n), p(n), x(n);
    rep(i, n) cin >> a[i] >> p[i] >> x[i];
    const int INF = 1e9+1;
    int ans = INF;
    rep(i, n) {
        if(a[i] < x[i]) {
            chmin(ans, p[i]);
        }
    }

    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}