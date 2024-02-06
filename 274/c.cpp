#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int a[n];
    vector<pair<int, int> > par(2 * n + 1);
    par[0] = make_pair(0, 0);
    rep(i, n) {
        cin >> a[i];
        a[i]--;
        par[2*i+1] = make_pair(a[i], par[a[i]].second+1);
        par[2*i+2] = make_pair(a[i], par[a[i]].second+1);
    }
    rep(i, 2 * n + 1) {
        cout << par[i].second << endl;
    }
}