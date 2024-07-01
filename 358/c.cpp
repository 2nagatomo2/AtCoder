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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    int ans = 100;
    rep(i, 1 << n) {
        vector<bool> v(m, false);
        int cnt = 0;
        rep(j, n) {
            if((i >> j) % 2 == 1) {
                cnt++;
                rep(k, m) {
                    if(s[j][k] == 'o') v[k] = true;
                }
            }
        }
        
        rep(j, m) {
            if(!v[j]) break;
            else if(j == m-1) {
                chmin(ans, cnt);
            }
        }
    }

    cout << ans << endl;
    return 0;
}