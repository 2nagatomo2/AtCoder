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
        for(int i = 1; i <= N; i++) par[i] = -1; // 最初は親がいない
        for(int i = 1; i <= N; i++) siz[i] = 1;  // 最初はグループの超点数が1
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
    int n;
    cin >> n;
    string s[n], t[n];
    rep(i, n) cin >> s[i] >> t[i];
    int count = 0, a[n], b[n];
    map<string, int> m;
    rep(i, n) {
        if(!m.count(s[i])) {
            count++;
            m[s[i]] = count;
        }
        a[i] = m[s[i]];
        if(!m.count(t[i])) {
            count++;
            m[t[i]] = count;
        }
        b[i] = m[t[i]];
    }

    UnionFind UF;
    UF.init(count);
    rep(i, n) {
        if(UF.same(a[i], b[i])) {
            cout << "No" << endl;
            return 0;
        }
        UF.unite(a[i], b[i]);
    }
    cout << "Yes" << endl;
    return 0;
}