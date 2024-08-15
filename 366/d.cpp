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
    int n, q;
    cin >> n;
    vector<vector<vector<int>>> a(n, vector<vector<int>>(n, vector<int>(n)));
    vector<vector<vector<ll>>> b(n, vector<vector<ll>>(n, vector<ll>(n)));
    rep(i, n) rep(j, n) rep(k, n) cin >> a[i][j][k];

    rep(i, n) rep(j, n) rep(k, n) {
        if(k == 0) b[i][j][k] = a[i][j][k];
        else b[i][j][k] = a[i][j][k] + b[i][j][k-1];
    }
    rep(i, n) rep(j, n-1) rep(k, n) b[i][j+1][k] += b[i][j][k];
    rep(i, n-1) rep(j, n) rep(k, n) b[i+1][j][k] += b[i][j][k];
    
    cin >> q;
    while(q--) {
        int lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        lx--, rx--, ly--, ry--, lz--, rz--;
        ll ans = b[rx][ry][rz];
        if(lx != 0) ans -= b[lx-1][ry][rz];
        if(ly != 0) ans -= b[rx][ly-1][rz];
        if(lz != 0) ans -= b[rx][ry][lz-1];
        if(lx != 0 && ly != 0) ans += b[lx-1][ly-1][rz];
        if(ly != 0 && lz != 0) ans += b[rx][ly-1][lz-1];
        if(lz != 0 && lx != 0) ans += b[lx-1][ry][lz-1];
        if(lx != 0 && ly != 0 && lz != 0) ans -= b[lx-1][ly-1][lz-1];
        cout << ans << endl;
    }
    return 0;
}