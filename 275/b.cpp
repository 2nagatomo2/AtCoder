#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll mod = 998244353;
    ll ans = (((((a % mod) * (b % mod)) % mod) * (c % mod)) % mod) - (((((d % mod) * (e % mod)) % mod) * (f % mod)) % mod);
    if(ans >= 0) cout << ans << endl;
    else cout << ans + mod << endl;
    return 0;
}