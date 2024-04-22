#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, x;
    cin >> n;
    vector<vector<int>> l(n);
    rep(i, n) {
        cin >> x;
        l[i].resize(x);
        rep(j, x) {
            cin >> l[i][j];
        }
    }
    set<vector<int>> st;
    rep(i, n) {
        st.insert(l[i]);
    }
    cout << st.size() << endl;
    return 0;
}