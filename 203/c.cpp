#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n;
    ll k, a, b;
    cin >> n >> k;
    vector<pll> p(n);
    rep(i, n) {
        cin >> a >> b;
        p[i] = {a, b};
    }
    sort(p.begin(), p.end());
    rep(i, n) {
        if(k >= p[i].first) {
            k += p[i].second;
        } else {
            break;
        }
    }
    cout << k << endl;
    return 0;
}