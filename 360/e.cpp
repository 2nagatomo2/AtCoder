#include <bits/stdc++.h>
#include "atcoder/modint"

using namespace std;
using mint = atcoder::modint998244353;
#define ull unsigned long long
#define ll long long
#define ld long double

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
        int t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main() {
    ll n, k;
    cin >> n >> k;
    const int MOD = 998244353;
    vector<mint> dp(k+1);
    dp[0] = 1;
    rep(i, k) {
        dp[i+1] = ((n+1)) * (modinv(n, MOD));
        dp[i+1] += (((n-2) * dp[i])) * (modinv(n, MOD));
    }

    cout << dp[k].val() << endl;
    return 0;
}