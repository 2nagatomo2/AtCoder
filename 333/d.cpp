#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int> > g(n);
    vector<bool> visited(n, false);
    int v1, v2;
    vector<set<int> > next(n);
    rep(i, n-1) {
        cin >> v1 >> v2;
        v1--; v2--;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
        if(v1 == 0) {
            next[v2].insert(v2);
        }
    }
    

    int ans = 1000000, cost = 0, cnt = 0;
    stack<int> st;
    st.push(0);
    visited[0] = true;
    while(!st.empty()) {
        int pos = st.top();
        st.pop();
        for(int v : g[pos]) {
            if(!visited[v]) {
                visited[v] = true;
                st.push(v);
                cnt++;
            }
        }
    }

    cout << ans << endl;    
    return 0;
}