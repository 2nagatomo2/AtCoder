#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <map>
#include <queue>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)
#define ll long long

struct Edge {
    int to, cost, dist;
    Edge(int to=0, int cost=0): to(to), cost(cost) {}
};

int ans;
vector<bool> visited(11, false);

void dfs(vector<vector<Edge> > &g, int &pos, int dist) {
    visited[pos] = true;
    ans = max(ans, dist);
    for(auto v : g[pos]) {
        if(!visited[v.to]) {
            dfs(g, v.to, dist+v.cost);
        }
    }
    visited[pos] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    int a, b, c;
    vector<vector<Edge> > g(n);

    rep(i, m) {
        cin >> a >> b >> c;
        a--;
        b--;
        g[a].emplace_back(b, c);
        g[b].emplace_back(a, c);
    }

    rep(i, n) dfs(g, i, 0);
    cout << ans << endl;
    return 0;
}