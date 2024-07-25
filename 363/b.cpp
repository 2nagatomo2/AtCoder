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
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    sort(all(l));
    int ans = 0;
    while(t - ans > 0) {
        int idx = lower_bound(all(l), t - ans) - l.begin();
        if(n - idx >= p) {
            cout << ans << endl;
            break;
        }
        ans++;
    }
    return 0;
}