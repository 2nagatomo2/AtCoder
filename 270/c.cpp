#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

struct edge{
    vector<int> nxt;
    int prev = -1;
};
int main() {
    int n, x, y, u, v;
    cin >> n >> x >> y;
    map<int, edge> g;
    rep(i, n-1) {
        cin >> u >> v;
        g[u].nxt.push_back(v);
        g[v].nxt.push_back(u);
    }

    stack<int> st;
    vector<bool> visited(n+1, false);
    st.push(x);
    visited[x] = true;
    while(!st.empty()) {
        int pos = st.top();
        st.pop();
        for(int e : g[pos].nxt) {
            if(!visited[e]) {
                visited[e] = true;
                st.push(e);
                g[e].prev = pos;
            }
            if(e == y) break;
        }
    }
    stack<int> ans;
    ans.push(y);
    while(true) {
        int pos = ans.top();
        ans.push(g[pos].prev);
        if(ans.top() == x) break;
    }

    while(!ans.empty()) {
        cout << ans.top() << ' ';
        ans.pop();
    }
    cout << endl;
    return 0;
}