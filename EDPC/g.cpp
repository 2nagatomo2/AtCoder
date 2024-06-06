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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    int x, y;
    rep(i, m) {
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
    }
    vector<ll> memo(n, -1);

    auto f = [&](auto f, int now) -> void {
        for(int v : g[now]) {
            if(memo[v] == -1) {
                if(g[v].size() == 0) {
                    memo[v] = 0;
                    chmax(memo[now], 1LL);
                } else {
                    f(f, v);
                    chmax(memo[now], memo[v]+1);
                }
            } else {
                chmax(memo[now], memo[v]+1);
            }
        }
    };
    rep(i, n) f(f, i);
    ll ans = 0;
    rep(i, n) chmax(ans, memo[i]);
    cout << ans << endl;
    return 0;
}