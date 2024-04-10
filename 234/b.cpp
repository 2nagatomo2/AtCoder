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
    double x[n], y[n];
    rep(i, n) cin >> x[i] >> y[i];
    double ans = 0;
    rep(i, n) rep(j, n) {
        chmax(ans, sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j])));
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}