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
    int n, m, k;
    cin >> n >> m;
    vector<int> a(m), b(m);
    rep(i, m) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) {
        cin >> c[i] >> d[i];
        c[i]--; d[i]--;
    }

    int ans = 0;
    rep(i, 1 << k) {
        vector<bool> e(n, false);
        rep(j, k) {
            if((i >> j) & 1) e[c[j]] = true;
            else e[d[j]] = true;
        }

        int tmp = 0;
        rep(j, m) {
            if(e[a[j]] && e[b[j]]) tmp++;
        }

        chmax(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}