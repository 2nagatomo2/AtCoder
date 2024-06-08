#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

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

int mypow(long long a, long long n, ll MOD) {
    if (n == 0) return 1;
    if (n == 1) return a % MOD;

    long long ret = mypow(a, n / 2, MOD) % MOD;
    (ret *= ret) %= MOD;
    if (n % 2 == 1) {
        (ret *= a) %= MOD;
    }
    return ret;
}

ll modpow(long long a, long long n, ll MOD) {
    if (n == 0) return 1;
    if (n == 1) return a % MOD;

    long long ret = mypow(a, n / 2, MOD) % MOD;
    (ret *= ret) %= MOD;
    if (n % 2 == 1) {
        (ret *= a) %= MOD;
    }
    return ret;
}

int main() {
    ll n;
    cin >> n;
    const ll MOD = 998244353;
    int l = to_string(n).length();
    ll r = (ll)mypow(10, l, MOD) % MOD;
    ll tmp = (((ll)(mypow(r , n, MOD)) - 1 + MOD) % MOD) * ((modinv(r-1, MOD)+MOD)%MOD);
    tmp %= MOD;
    ll ans = (n % MOD) * tmp;
    ans %= MOD;
    cout << ans << endl;
    return 0;
}