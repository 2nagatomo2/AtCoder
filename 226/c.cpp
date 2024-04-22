#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k;
    cin >> n;
    ll t[n];
    vector<vector<ll>> a(n);
    rep(i, n) {
        cin >> t[i] >> k;
        a[i].resize(k);
        rep(j, k) {
            cin >> a[i][j];
            a[i][j]--;
        }
    }

    ll ans = 0;
    stack<int> st;
    vector<bool> visited(n, false);
    st.push(n-1);
    ans += t[n-1];
    visited[n-1] = true;
    while(!st.empty()) {
        int now = st.top();
        st.pop();
        for(int v : a[now]) {
            if(!visited[v]) {
                ans += t[v];
                visited[v] = true;
                st.push(v);
            }
        }
    }

    cout << ans << endl;
    return 0;
}