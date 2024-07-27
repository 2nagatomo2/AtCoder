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
    int n, m, u, v;
    cin >> n >> m;
    UnionFind uf;
    uf.init(n);
    rep(i, m) {
        cin >> u >> v;
        u--; v--;
        uf.unite(u, v);
    }

    int k;
    cin >> k;
    vector<int> x(k);
    vector<int> y(k);
    set<pii> st;
    rep(i, k) {
        cin >> x[i] >> y[i];
        x[i]--; y[i]--;
        st.insert({uf.root(x[i]), uf.root(y[i])});
    }

    int Q, p, q;
     cin >> Q;
    rep(i, Q) {
        cin >> p >> q;
        p--; q--;
        if(uf.same(p, q)) cout << "Yes" << endl;
        else {
            if(st.count({uf.root(p), uf.root(q)}) || st.count({uf.root(q), uf.root(p)})) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
    return 0;
}