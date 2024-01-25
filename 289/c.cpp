#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    int n, m;
    cin >> n >> m;
    int c[m];
    int ans = 0;
    vector<vector<int> > a(m);

    rep(i, m) {
        cin >> c[i];
        a[i].resize(c[i]);
        rep(j, c[i]) {
            cin >> a[i][j];
        }
    }

    rep(i, 1 << m) {
        set<int> st;
        rep(j, m) {
            if((i >> j) & 1) {
                for(int x : a[j]) st.insert(x);
            }
        }
        if(int(st.size()) == n) ans++;
    }
    
    cout << ans << endl;
    return 0;
}