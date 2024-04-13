#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, w;
    cin >> n >> w;
    ll a[n] , b[n];
    vector<pair<ll, ll>> p(n);
    rep(i, n) {
        cin >> a[i] >> b[i];
        p[i] = {a[i], b[i]};
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    ll ans = 0, w_now = 0;
    rep(i, n) {
        if(w_now + p[i].second <= w) {
            w_now += p[i].second;
            ans += p[i].first * p[i].second;
        } else {
            ans += p[i].first * (w - w_now);
            break;
        }
    }
    cout << ans << endl;
    return 0;
}