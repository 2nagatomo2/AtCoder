#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

struct UnionFind {
    int par[1000000];
    int siz[1000000];

    // N 頂点の Union-Find を作成
    void init(int N) {
        for(int i = 0; i <= N; i++) par[i] = -1; // 最初は親がいない
        for(int i = 0; i <= N; i++) siz[i] = 1;  // 最初はグループの超点数が1
    }

    // 頂点 x の根を返す関数
    int root(int x) {
        while(true) {
            if(par[x] == -1) break; // 1個先（親）がなければ、ここが根
            x = par[x];             // 1個先（親）に進む
        }
        return x;
    }

    // 頂点 u と v を統合する関数
    void unite(int u, int v) {
        int RootU = root(u);
        int RootV = root(v);
        if(RootU == RootV) return; // u と v が同じグループの時は処理を行わない
        if(siz[RootU] < siz[RootV]) {
            par[RootU] = RootV;
            siz[RootV] += siz[RootU];
        }
        else {
            par[RootV] = RootU;
            siz[RootU] += siz[RootV];
        }
    }

    // 要素 u と v が同一のグループかどうかを返す関数
    bool same(int u, int v) {
        if(root(u) == root(v)) return true;
        else return false;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    int k[m], c;
    vector<pair<ll, int>> C(m);
    vector<vector<int>> a(m);
    rep(i, m) {
        cin >> k[i] >> c;
        C[i] = {c, i};
        a[i].resize(k[i]);
        rep(j, k[i]) cin >> a[i][j];
    }
    sort(C.begin(), C.end());

    UnionFind uf;
    uf.init(n);
    ll ans = 0;
    rep(i, m) {
        int idx = C[i].second;
        rep(j, k[idx]-1) {
            if(!uf.same(a[idx][j], a[idx][j+1])) {
                uf.unite(a[idx][j], a[idx][j+1]);
                ans += C[i].first;
                if(uf.siz[uf.root(a[idx][j])] == n) {
                    cout << ans << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}