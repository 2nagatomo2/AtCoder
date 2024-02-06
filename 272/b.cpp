#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m, k, x;
    cin >> n >> m;
    vector<set<int> > st(n);
    vector<vector<int> > vec(m);
    rep(i, m) {
        cin >> k;
        vec[i].resize(k);
        rep(j, k) {
            cin >> x;
            x--;
            vec[i][j] = x;
        }

        for(int j : vec[i]) {
            for(int l : vec[i]) {
                if(j == l) continue;
                st[j].insert(l);
                st[l].insert(j);
            }
        }
    }

    rep(i, n) {
        if(st[i].size() != n-1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}