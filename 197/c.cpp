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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    const ll INF = 1e12;
    ll ans = INF;

    rep(i, 1 << (n-1)) {
        ll xored = 0, ored = 0;
        rep(j, n+1) {
            if(j < n) {
                ored |= a[j];
            }
            if(j == n || (i >> j & 1)) {
                xored ^= ored;
                ored = 0;
            }
        }

        chmin(ans, xored);
    }

    cout << ans << endl;
    return 0;
}