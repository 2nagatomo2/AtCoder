#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    vector<set<int>> g(n);
    int a;
    rep(i, n) {
        rep(j, n) {
            cin >> a;
            if(a == 1) {
                g[i].insert(j+1);
            }
        }
    }

    rep(i, n) {
        for(auto itr = g[i].begin(); itr != g[i].end(); itr++) {
            cout << *itr << ' ';
        }
        cout << endl;
    }
    return 0;
}