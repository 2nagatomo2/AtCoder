#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

ll p(int n) {
    ll res = 1;
    rep(i, n) res *= 10;
    return res;
}

// mod. m での a の逆元 a^{-1} を計算する
ll modinv(ll a, ll m) {
	ll b = m, u = 1, v = 0;
	while (b) {
		long long t = a / b;
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}
	u %= m;
	if (u < 0) u += m;
	return u;
}

int main() {
    ll n;
    cin >> n;    
    int l = to_string(n).length();
    ll const MOD = 998244353;
    ll ans = 0;
    ll mod = modinv(2, MOD);

    rep(i, l) {
        ll m = (p(i) - 1), M = (p(i+1) - 1);
        ll x = M - m;
        if(i != l-1) {
            ans += ((((x % MOD) * ((x+1) % MOD)) % MOD) * mod) % MOD;
        } else {
            ans += (((((n-m) % MOD) * ((n-m+1) % MOD)) % MOD) * mod) % MOD;
        }
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}