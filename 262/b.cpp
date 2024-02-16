#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<set<int> > G(N);
    int u, v;
    rep(i, M) {
        cin >> u >> v;
        u--; v--;
        G[u].insert(v);
        G[v].insert(u);
    }

    int ans = 0;
    for(int i=0; i<N-2; i++) {
        for(int j=i; j<N-1; j++) {
            for(int k=j; k<N; k++) {
                if(G[i].count(j) && G[j].count(k) && G[k].count(i)) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}