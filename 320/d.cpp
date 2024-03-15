#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b);
#define chmin(a, b) a = min(a, b);

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, pair<int, int>>>> G(n);
    int a, b, x, y, s = -1;
    rep(i, m) {
        cin >> a >> b >> x >> y;
        a--;
        b--;
        G[a].push_back({b, {x, y}});
        G[b].push_back({a, {-x, -y}});
    }

    vector<pair<ll, ll>> ans(n);
    vector<bool> visited(n, false);
    ans[0] = {0, 0};
    visited[0] = true;
    stack<int> st;
    st.push(0);
    while(!st.empty()) {
        int pos = st.top();
        st.pop();
        for(auto g : G[pos]) {
            if(!visited[g.first]) {
                int nxt_x = g.second.first, nxt_y = g.second.second;
                ans[g.first] = {ans[pos].first + nxt_x, ans[pos].second + nxt_y};
                visited[g.first] = true;
                st.push(g.first);
            }
        }
    }

    rep(i, n) {
        if(visited[i]) cout << ans[i].first << ' ' << ans[i].second << endl;
        else cout << "undecidable" << endl;
    }
    return 0;
}