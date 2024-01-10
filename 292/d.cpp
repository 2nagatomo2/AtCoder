#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

struct UnionFind {
    vector<int> par;
    vector<int> siz;

    // N 頂点の Union-Find を作成
    void init(int N) {
        for(int i = 0; i <= N; i++) par.push_back(-1); // 最初は親がいない
        for(int i = 0; i <= N; i++) siz.push_back(1);  // 最初はグループの超点数が1
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
    if(n != m) {
        cout << "No" << endl;
        exit(0);
    }
    UnionFind UF;
    UF.init(n);
    int u[n+1], v[n+1];
    for(int i=1; i<=m; i++) {
        cin >> u[i] >> v[i];
        UF.unite(u[i], v[i]);
    }
    vector<int> vs(n, 0), es(n, 0);
    for(int i=1; i<=n; i++) {
        vs[UF.root(i)]++;
    }    
    for(int i=1; i<=m; i++) {
        es[UF.root(u[i])]++;
    }

    if(vs == es) cout << "Yes" << endl;
    else cout << "No" << endl; 
    return 0;
}