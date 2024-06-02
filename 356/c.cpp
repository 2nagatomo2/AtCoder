#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> c(m);
    vector<vector<int>> a(m);
    vector<char> r(m);
    rep(i, m) {
        cin >> c[i];
        a[i].resize(c[i]);
        rep(j, c[i]) {
            cin >> a[i][j];
            a[i][j]--;
        }
        cin >> r[i];
    }
    ll ans = 0;
    bool flag = true;
    rep(i, 1 << n) {
        flag = true;
        rep(j, m) {
            int tmp = 0;
            rep(l, a[j].size()) {
                if((i >> a[j][l]) % 2 == 1) tmp++;
            }
            if(((tmp < k) && (r[j] == 'o')) || ((tmp >= k) && (r[j] == 'x'))) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
    return 0;
}