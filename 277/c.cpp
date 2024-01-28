#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

struct Edge{
    bool visited = false;
    vector<int> to;
};


int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    map<int, Edge> g;
    rep(i, n) {
        cin >> a[i] >> b[i];
        g[a[i]].to.push_back(b[i]);
        g[b[i]].to.push_back(a[i]);
    }

    /* dfs
    int ans = 1, pos;
    stack<int> st;
    st.push(1);
    while(!st.empty()) {
        pos = st.top();
        st.pop();
        for(int v : g[pos].to) {
            if(g[v].visited == false) {
                st.push(v);
                g[v].visited = true;
                ans = max(ans, v);
            }
        }
    }
    */

    // bfs
    int ans = 1, pos;
    queue<int> que;
    que.push(1);
    while(!que.empty()) {
        pos = que.front();
        que.pop();
        for(int v : g[pos].to) {
            if(g[v].visited == false) {
                que.push(v);
                g[v].visited = true;
                ans = max(ans, v);
            }
        }
    }
    cout << ans << endl;
    return 0;
}