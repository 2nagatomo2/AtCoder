#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    ll a[n], b[n];
    rep(i, n) cin >> a[i];
    b[0] = a[0];
    rep(i, n-1) b[i+1] = b[i] + a[i+1];
    ll x;
    cin >> x;
    ll ans = x / b[n-1];
    ll y = x - ans * b[n-1];
    ans *= n;
    ll t = upper_bound(b, b+n, y) - b;
    ans += t + 1;
    cout << ans << endl;
    return 0;
}