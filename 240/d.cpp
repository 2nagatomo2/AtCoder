#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    stack<pair<int, int>> st;
    stack<pair<int, int>> tmp;
    
    rep(i, n) {
        if(st.empty()) {
            st.push({a[i], 1});
        } else if(a[i] == st.top().first) {
            st.push({a[i], st.top().second + 1});
            if(st.top().first == st.top().second) {
                int cnt = st.top().second;
                rep(_, cnt) st.pop();
            }
        } else {
            st.push({a[i], 1});
        }
        cout << st.size() << endl;
    }
    return 0;
}