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

int main() {
    int n, q, u, v, query;
    cin >> n >> q;
    vector<set<int>> edge(n);
    int ans = n;
    while(q--) {
        cin >> query;
        switch (query) {
            case 1:
                cin >> u >> v;
                u--; v--;
                edge[u].insert(v);
                edge[v].insert(u);
                if(edge[u].size() == 1) ans--;
                if(edge[v].size() == 1) ans--;
                cout << ans << endl;
                break;
            case 2:
                cin >> v;
                v--;
                for(int i : edge[v]) {
                    if(edge[i].count(v)) {
                        edge[i].erase(v);
                        if(edge[i].size() == 0) ans++;
                    }
                }
                if(edge[v].size() != 0) {
                    edge[v].clear();
                    ans++;
                }
                cout << ans << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}