#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[m], b[m], x[n];
    rep(i, m) {
        cin >> a[i];
        a[i]--;
        }
    rep(i, m) {
        cin >> b[i];
        b[i]--;
    }
    rep(i, n) x[i] = -1;
    vector<vector<int>> g(n);
    rep(i, m) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    vector<bool> visited(n, false);
    stack<int> st; 
    rep(i, n) {
        if(visited[i]) continue;
        else {
            st.push(i);
            x[i] = 0;
            while(!st.empty()) {
                int pos = st.top();
                st.pop();
                if(!visited[pos]) {
                    visited[pos] = true;
                    for(int v : g[pos]) {
                        if(x[pos] == 0) {
                            if(x[v] == 0) {
                                cout << "No" << endl;
                                return 0;
                            }
                            else x[v] = 1;
                        }
                        else {
                            if(x[v] == 1) {
                                cout << "No" << endl;
                                return 0;
                            } 
                            else x[v] = 0;
                        }
                        st.push(v);
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}