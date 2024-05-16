#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (ll i=0; i<(n); i++)
#define REP(i,b,n) for(ll i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    const ll MOD = 998244353;
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll len;
    map<ll, vector<ll>> mp;
    ll ans = 0;
    ll max_l = 1;
    rep(i, n) {
        cin >> a[i];
        len = to_string(a[i]).length();
        chmax(max_l, len);
        ans += ((a[i] % MOD) * i) % MOD;
        ans %= MOD;
        mp[len].push_back(i);
    }
    rep(i, n) {
        rep(j, max_l) {
            if(mp.count(j+1)) {
                ll d = upper_bound(mp[j+1].begin(), mp[j+1].end(), i) - mp[j+1].begin();
                ll tmp = powl(10, j+1);
                tmp %= MOD;
                tmp *= a[i];
                tmp %= MOD;
                tmp *= mp[j+1].size() - d;
                tmp %= MOD;
                ans += tmp;
                ans %= MOD;
            }
        }
    }
    cout << ans << endl;
    return 0;
}