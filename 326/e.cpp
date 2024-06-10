#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

// mod. m での a の逆元 a^{-1} を計算する
ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    rep(i, n) cin >> a[i+1];
    ll const MOD = 998244353;
    ll s = 0;
    vector<long> dp(n+1, 0);
    for(int i = n; i >= 0; i--) {
        dp[i] = s * modinv(n, MOD) + a[i];
        dp[i] %= MOD;
        s+= dp[i];
        s %= MOD;
    }

    cout << dp[0] << endl;
    return 0;
}