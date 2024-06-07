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
    vector<pair<int, int>> p;

    for(int i = 1; i * i <= m; i++) {
        int j = sqrt(m - (i*i));
        if((i*i) + (j*j) == m) {
            p.push_back({i, j});
            p.push_back({j, i});
        }
    }

    vector<vector<int>> g(n, vector<int>(n, -1));
    g[0][0] = 0;
    queue<pair<int, int>> que;
    que.push({0, 0});
    while(!que.empty()) {
        auto t = que.front();
        que.pop();
        int h = t.first, w = t.second;
        for(auto nxt : p) {
            int dh = nxt.first, dw = nxt.second;
            if((h+dh < n) && (w+dw < n)) {
                if(g[h+dh][w+dw] == -1) {
                    g[h+dh][w+dw] = g[h][w] + 1;
                    que.push({h+dh, w+dw});
                }
            }
            if((h+dh < n) && (w-dw >= 0)) {
                if(g[h+dh][w-dw] == -1) {
                    g[h+dh][w-dw] = g[h][w] + 1;
                    que.push({h+dh, w-dw});
                }
            }
            if((h-dh >= 0) && (w+dw < n)) {
                if(g[h-dh][w+dw] == -1) {
                    g[h-dh][w+dw] = g[h][w] + 1;
                    que.push({h-dh, w+dw});
                }
            }
            if((h-dh >= 0) && (w-dw >= 0)) {
                if(g[h-dh][w-dw] == -1) {
                    g[h-dh][w-dw] = g[h][w] + 1;
                    que.push({h-dh, w-dw});
                }
            }
        }
    }

    rep(i, n) {
        rep(j, n) cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}