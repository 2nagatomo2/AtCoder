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
    int x, y;
    vector<pair<int, int>> g;
    rep(i, n) {
        cin >> x >> y;
        g.push_back({x, y});
    }
    ll ans = 0;
    rep(i, n-2) {
        REP(j, i+1, n-1) {
            REP(k, j+1, n) {
                int x1 = g[i].first, y1 = g[i].second;
                int x2 = g[j].first, y2 = g[j].second;
                int x3 = g[k].first, y3 = g[k].second;
                if((x1-x2)*(y2-y3) != (x2-x3)*(y1-y2)) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}