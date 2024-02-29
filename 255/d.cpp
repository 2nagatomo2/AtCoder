#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    ll a[n], x, acc[n];
    rep(i, n) cin >> a[i];
    sort(a, a+n);
    acc[0] = a[0];
    rep(i, n-1) {
        acc[i+1] = acc[i] + a[i+1];
    }
    while(q--) {
        cin >> x;
        int l = lower_bound(a, a+n, x) - a, r = upper_bound(a, a+n, x) - a;
        ll ans;
        if(l == 0 && r == 0) {
            ans = acc[n-1] - x * n;
        } else if(l == n && r == n) {
            ans = x * n - acc[n-1];
        } else {
            if(l == 0) ans = acc[n-1] - acc[r-1] - x * (n - r);
            else ans = x * l - acc[l-1] + acc[n-1] - acc[r-1] - x * (n - r);
        }
        cout << ans << endl;
    }
    return 0;
}