#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, q, x;
    cin >> n >> q;
    ll a[n];
    rep(i, n) cin >> a[i];
    sort(a, a+n);
    while(q--) {
        cin >> x;
        int ans = n - (lower_bound(a, a+n, x) - a);
        cout << ans << endl;
    }
    return 0;
}