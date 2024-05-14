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
    ll a[n], b[n], c[n];
    map<int, ll> mp;
    vector<int> v;
    rep(i, n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    rep(i, n) cin >> b[i];
    rep(i, n) {
        cin >> c[i];
        c[i]--;
        v.push_back(b[c[i]]);
    }
    ll ans = 0;
    rep(i, n) ans += mp[v[i]];
    cout << ans << endl;
    return 0;
}