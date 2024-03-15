#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int m;
    cin >> m;
    string s[3];
    rep(i, 3) cin >> s[i];
    const int INF = 1000;
    int ans = INF;
    rep(i, 3*m) {
        rep(j, 3*m) {
            rep(k, 3*m) {
                if(s[0][i % m] == s[1][j % m] && s[1][j % m] == s[2][k % m]) {
                    if(i != j && j != k && k != i) ans = min(ans, max(max(i, j), k));
                }
            }
        }
    }
    
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}