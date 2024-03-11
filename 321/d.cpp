#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    ll n, m, p;
    cin >> n >> m >> p;
    vector<ll> a(n), b(m), acc(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    acc[0] = b[0];
    rep(i, m-1) acc[i+1] = acc[i] + b[i+1];

    ll ans = 0;
    rep(i, n) {
        ll idx = lower_bound(b.begin(), b.end(), p - a[i]) - b.begin();
        if(idx != 0) ans += a[i] * idx + acc[idx-1] + p * (m - idx);
        else ans += p * m;
    }
    cout << ans << endl;
    
    return 0;
}