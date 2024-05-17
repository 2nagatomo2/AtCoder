#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (ll i=0; i<(n); i++)
#define REP(i,b,n) for(ll i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)


int main() {
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    ll const MOD = 100000000;

    sort(a.begin(), a.end());
    b[0] = a[0];
    rep(i, n-1) b[i+1] = b[i] + a[i+1];
    
    ll ans = 0;
    rep(i, n-1) {
        ll d = lower_bound(a.begin(), a.end(), MOD - a[i]) - a.begin();
        if(d == n) {
            ans += (n - i - 1) * a[i] + b[n-1] - b[i];
        } else if(d <= i+1) {
            ans += ((n - i - 1) * a[i] + b[n-1] - b[i]) - MOD * (n - i - 1);
        } else {
            ans += (d - i - 1) * a[i] + b[d-1] - b[i];
            ans += ((n - d) * a[i] + b[n-1] - b[d-1]) - MOD * (n - d);
        }
    }
    cout << ans << endl;
    return 0;
}