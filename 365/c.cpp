#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n;
    ll m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    sort(all(a));
    b[0] = a[0];
    rep(i, n-1) b[i+1] = b[i] + a[i+1];

    if(b[n-1] <= m) {
        cout << "infinite" << endl;
        return 0;
    }
    
    ll l = 0, r = a[n-1];
    while(r - l > 1) {
        ll mid = (l + r) / 2;
        ll i = n - (lower_bound(all(a), mid) - a.begin());
        ll c = i == n ? 0 : b[n-i-1];
        ll tmp = mid * i + c;
        if(tmp <= m) l = mid;
        else r = mid;
    }

    cout << l << endl;
    return 0;
}