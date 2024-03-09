#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, m, l, q;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];
    cin >> m;
    ll b[m];
    rep(i, m) cin >> b[i];
    cin >> l;
    ll c[l];
    rep(i, l) cin >> c[i];
    cin >> q;
    ll x[q];
    rep(i, q) cin >> x[i];
    set<int> sum;
    rep(i, n) {
        rep(j, m) {
            rep(k, l) {
                sum.insert(a[i] + b[j] + c[k]);
            }
        }
    }

    rep(i, q) {
        if(sum.count(x[i])) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}