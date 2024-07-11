#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, b, n) for (int i = b; i < (n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(), x.end()

int main() {
    int n;
    string t;
    cin >> n >> t;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<int> pre(n);
    vector<int> pos(n);
    rep(i, n) {
        int idx = 0;
        rep(j, s[i].length()) {
            if(s[i][j] == t[idx]) {
                idx++;
            }
        }

        pre[i] = idx;

        idx = 0;
        rep(j, s[i].length()) {
            if(s[i][s[i].length()-j-1] == t[t.length()-idx-1]) {
                idx++;
            }
        }

        pos[i] = idx;
    }

    sort(all(pos));
    
    ll ans = 0;
    rep(i, n) {
        int d = lower_bound(all(pos), t.length() - pre[i]) - pos.begin();
        ans += max(0, n - d);
    }
    cout << ans << endl;
    return 0;
}