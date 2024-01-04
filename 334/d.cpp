#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    ll r[n];
    rep(i, n) cin >> r[i];
    sort(r, r+n);
    ll acc[n];
    acc[0] = r[0];
    rep(i, n-1) acc[i+1] = acc[i] + r[i+1];

    ll x;
    rep(i, q) {
        cin >> x;
        auto ans = upper_bound(acc, acc+n, x);
        cout << ans - acc << endl;
    }
    return 0;
}