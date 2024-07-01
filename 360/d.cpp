#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    ll n, t;
    string s;
    cin >> n >> t >> s;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    vector<int> hidari, migi;
    rep(i, n) {
        if(s[i] == '0') hidari.push_back(x[i]);
        else migi.push_back(x[i]);
    }
    sort(hidari.begin(), hidari.end());
    sort(migi.begin(), migi.end());

    ll ans = 0;
    rep(i, migi.size()) {
        int li = lower_bound(hidari.begin(), hidari.end(), migi[i]) - hidari.begin();
        int ri = upper_bound(hidari.begin(), hidari.end(), migi[i] + (2 * t)) - hidari.begin();
        ans += ri - li;
    }

    cout << ans << endl;
    return 0;
}