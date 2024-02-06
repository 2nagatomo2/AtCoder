#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

struct Edge {
    vector<int> to;
    bool visited = false;
};


int main() {
    int n, x, y;
    cin >> n;
    map<int, Edge> g;
    rep(i, n) {
        cin >> x >> y;
        x += 1000;
        y += 1000;
        int tmp1 = 10000 * x + y;
        g[tmp1].to.push_back(NULL);
        for(auto itr = g.begin(); itr != g.end(); itr++) {
            int tmp2 = itr->first;
            if(abs(tmp1 - tmp2) == 10000 || abs(tmp1 - tmp2) == 1 || abs(tmp1 - tmp2) == 10001) {
                g[tmp1].to.push_back(tmp2);
                g[tmp2].to.push_back(tmp1);
            }
        }
    }

    int ans = 0, cnt = 0;
    for(auto itr = g.begin(); itr != g.end(); itr++) {
        int s = itr->first;
        stack<int> st;
        if(g[s].visited) continue;
        ans++;
        st.push(s);
        g[s].visited = true;
        while(!st.empty()) {
            int pos = st.top();
            st.pop();
            for(int v : g[pos].to) {
                if(!g[v].visited) {
                    g[v].visited = true;
                    st.push(v);
                }
            }
        }
    }
    cout << ans << endl;
}