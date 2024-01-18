#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    
    if(n != m+1) {
        cout << "No" << endl;
        exit(0);
    }
    
    vector<vector<int> > g(n);
    int u, v;
    rep(i, m) {
        cin >> u >> v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
        if(g[u].size() == 3 || g[v].size() == 3) {
            cout << "No" << endl;
            exit(0);
        }
    }

    stack<int> st;
    vector<bool> visited(n, false);
    int pos, dist = 0;
    rep(i, n) {
        if(g[i].size() == 1) pos = i;
    }
    st.push(pos);
    visited[pos] = true;
    while(!st.empty()) {
        pos = st.top();
        st.pop();
        for(int v : g[pos]) {
            if(!visited[v]) {
                st.push(v);
                visited[v] = true;
                dist++;
            }
        }
    }
    if(dist == n-1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}