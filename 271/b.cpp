#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, q, l, s, t;
    cin >> n >> q;
    vector<vector<int> > a(n);
    rep(i, n) {
        cin >> l;
        a[i].resize(l);
        for(auto &x : a[i]) cin >> x; 
    }

    rep(i, q) {
        cin >> s >> t;
        s--; t--;
        cout << a[s][t] << endl;
    }
    return 0;
}