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
    ll a[n], b[n], m = 0;
    ll ans = 0;
    rep(i, n) {
        cin >> a[i] >> b[i];
        chmax(m, b[i] - a[i]);
        ans += a[i];
    }
    ans += m;
    cout << ans << endl;
    return 0;
}