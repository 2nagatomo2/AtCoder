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
    ll s[n], t[n], ans[n];
    int idx = 0, min_t = 1e9;;
    rep(i, n) cin >> s[i];
    rep(i, n) {
        cin >> t[i];
        if(min_t > t[i]) {
            idx = i;
            min_t = t[i];
        }
    }
    ans[idx] = min_t;
    rep(i, n-1) {
        ans[(idx+i+1) % n] = min(t[(idx+i+1) % n], ans[(idx+i) % n]+s[(idx+i) % n]);
    }
    rep(i, n) cout << ans[i] << endl;
    return 0;
}