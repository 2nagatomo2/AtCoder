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
    double a[n], b[n], c[n], d[n], e[n];
    rep(i, n) {
        cin >> a[i] >> b[i];
        c[i] = a[i] / b[i];
    }
    d[0] = c[0];
    e[0] = a[0];
    rep(i, n-1) {
        d[i+1] = d[i] + c[i+1];
        e[i+1] = e[i] + a[i+1];
    }
    int x = lower_bound(d, d+n, d[n-1]/2) - d;

    if(x == n-1) {
        cout << e[n-1] - (b[n-1] * (d[n-1]/2)) << endl;
    } else {
        cout << e[x] + (b[x] * (d[n-1]/2 - d[x])) << endl;
    }
    return 0;
}