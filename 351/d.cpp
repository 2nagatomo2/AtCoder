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
    int h, w;
    cin >> h >> w;
    char g[h][w];
    int x[h][w];
    rep(i, h) rep(j, w) {
        cin >> g[i][j];
        if(g[i][j] == '.') x[i][j] = 0;
        else x[i][j] = 2;
    }
    
    rep(i, h) {
        rep(j, w) {
            if(x[i][j] == 2) {
                if(i-1 >= 0) {
                    if(x[i-1][j] == 0) x[i-1][j] = 1;
                }
                if(i+1 <= h-1) {
                    if(x[i+1][j] == 0) x[i+1][j] = 1;
                }
                if(j-1 >= 0) {
                    if(x[i][j-1] == 0) x[i][j-1] = 1;
                }
                if(j+1 <= w-1) {
                    if(x[i][j+1] == 0) x[i][j+1] = 1;
                }
            }
        }
    }
    UnionFind uf;
    uf.init(h*w);
    map<int, set<int>> mp;
    rep(i, h) {
        rep(j, w) {
            if(x[i][j] == 0) {
                if(i-1 >= 0) {
                    if(x[i-1][j] == 0) uf.unite(i*w+j, (i-1)*w+j);
                    else if(x[i-1][j] == 1) mp[i*w+j].insert((i-1)*w+j);
                }
                if(i+1 <= h-1) {
                    if(x[i+1][j] == 0) uf.unite(i*w+j, (i+1)*w+j);
                    else if(x[i+1][j] == 1) mp[i*w+j].insert((i+1)*w+j);
                }
                if(j-1 >= 0) {
                    if(x[i][j-1] == 0) uf.unite(i*w+j, i*w+j-1);
                    else if(x[i][j-1] == 1) mp[i*w+j].insert(i*w+j-1);
                }
                if(j+1 <= w-1) {
                    if(x[i][j+1] == 0) uf.unite(i*w+j, i*w+j+1);
                    else if(x[i][j+1] == 1) mp[i*w+j].insert(i*w+j+1);
                }
            }
        }
    }

    for(auto i = mp.begin(); i != mp.end(); i++) {
        for(auto itr = i->second.begin(); itr != i->second.end(); itr++) {
            mp[uf.root(i->first)].insert(*itr);
        }
    }
    int ans = 0;
    rep(i, h) rep(j, w) {
            if(x[i][j] != 2) chmax(ans, uf.siz[i*w+j]+int(mp[i*w+j].size()));
    }
    cout << ans << endl;
    return 0;
}