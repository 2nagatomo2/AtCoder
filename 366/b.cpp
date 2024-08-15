#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, m = 0;
    cin >> n;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
        chmax(m, int(s[i].length()));
    }
    vector<string> t(m, "");
    rep(i, n) {
        rep(j, m) {
            if(j < s[i].length()) {
                t[j] += s[i][j];
            } else {
                t[j] += '*';
            }
        }
    }
    rep(i, m) {
        reverse(all(t[i]));
    }
    rep(i, m) {
        rep(j, n) {
            if(t[i][n-1-j] != '*') {
                t[i] = t[i].substr(0, n-j);
                break;
            }
        }
    }
    rep(i, m) cout << t[i] << endl;
    return 0;
}