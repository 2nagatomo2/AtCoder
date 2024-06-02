#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n, m, t;
    cin >> n >> m;
    int a[m], x[m];
    rep(i, m) {
        cin >> a[i];
        x[i] = 0;
    }
    rep(i, n) {
        rep(j, m) {
            cin >> t;
            x[j] += t;
        }
    }
    rep(i, m) {
        if(x[i] < a[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}