#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

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
    int a, c;
    char b, d;
    UnionFind UF;
    UF.init(n);
    int cycle = 0, line = n;
    rep(i, m) {
        cin >> a >> b >> c >> d;
        a--; c--;
        if(a == c) {
            cycle++;
            line--;
        }
        else {
            if(UF.same(a, c)) {
                cycle++;
            }
            UF.unite(a, c);
            line--;
        }
    }
    cout << cycle << ' ' << line << endl;
    return 0;
}