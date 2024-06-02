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
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    const ll MOD = 998244353;
    rep(i, 60) {
        ll x = (n+1) / (1LL<<(i+1)) * (1LL<<i);
        if((n+1) - (n+1) / (1LL<<(i+1)) * (1LL<<(i+1)) > (1LL << i)) x += (n+1) - (n+1) / (1LL<<(i+1)) * (1LL<<(i+1)) - (1LL<<i);
        if((m >> i) % 2 == 1) ans += x;
        ans %= MOD;
        if((n >> i) <= 1) break;
    }
    cout << ans << endl;
    return 0;
}